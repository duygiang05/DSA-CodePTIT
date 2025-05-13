#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x),left(NULL) , right(NULL) {} 
};

void dungcay(Node *root,int x,int y,char z) {
    if(!root) return ;
    if(x==root->data) {
        if(z == 'L') root->left = new Node(y);
        else root->right = new Node(y);
    }
    else {
        dungcay(root->left,x,y,z);
        dungcay(root->right,x,y,z);
    }
}

void xoanoc(Node* root) {
    queue<Node*> q;
    q.push(root);
    int dem=1;
    vector<int> v;
    while(!q.empty()) {
        int tmp=q.size();
        for(int i=0;i<tmp;i++) {
            Node* node=q.front(); q.pop();
            v.push_back(node->data);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        if(dem%2==0) {
            for(int i:v) cout<<i<<' ';
        }
        else {
            for(int i=v.size() -1;i>=0;i--) cout<<v[i]<<' ';
        }
        dem++;
        v.clear();
    }
}
void test()
{
    int t; cin>>t;
    while(t--) {
        int n,x,y; cin>>n;
        char z;
        Node* root =NULL;
        while(n--) {
            cin>>x>>y>>z;
            if(!root) {
                root = new Node(x);
                if(z=='L') root->left=new Node(y);
                else root->right = new Node(y);
            }
            else {
                dungcay(root,x,y,z);
            }
        }
        xoanoc(root);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}