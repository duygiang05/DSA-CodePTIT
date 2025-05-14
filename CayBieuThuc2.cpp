#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

bool check(string s) {
    return (s == "+" || s=="-" || s=="*" || s=="/") ;
}
int ketqua(int a,int b,string s) {
    if(s=="+") return a+b;
    if(s=="-") return a-b;
    if(s=="*") return a*b;
    return a/b;
}
struct Node {
    string data;
    Node *left,*right;
    Node(string s) :data(s),left(NULL) , right(NULL) {}
};

Node* dungcay(const vector<string> &v) {
    queue<Node*> q;
    Node* root = new Node(v[0]);
    q.push(root);
    int i=1,n=v.size();
    while(!q.empty()) {
        Node *node =q.front() ; q.pop();
        if(i<n) {
            Node* trai= new Node(v[i++]); 
            node->left=trai; q.push(trai);
        }
        if(i<n) {
            Node *phai =new Node(v[i++]); 
            node->right=phai; q.push(phai);
        }
    }
    return root;
}

int duyetcay(Node *root) {
    if(!check(root->data)) {
        return stoi(root->data);
    }
    int trai = duyetcay(root->left);
    int phai = duyetcay(root->right);
    return ketqua(trai,phai,root->data);
}
void test()
{
    int t; cin>>t;
    vector<string> v;
    while(t--) {
        int n; cin>>n;
        v.resize(n);
        for(int i=0;i<n;i++) cin>>v[i];
        Node* root = dungcay(v);
        cout<<duyetcay(root)<<'\n';
        v.clear();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}