#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    int data;
    Node *left,*right;
    Node(int val) :data(val) , left(nullptr) , right(nullptr) {}
};

Node* dungcay(vector<int> &pre,vector<int> &in,map<int,int> &mp,int pre1,int pre2,int in1,int in2) {
    if(pre1>pre2 || in1>in2) return nullptr;
    Node* root=new Node(pre[pre1]);
    int vtri=mp[root->data];
    int dc=vtri-in1;
    root->left = dungcay(pre,in,mp,pre1+1,pre1+dc,in1,vtri-1);
    root->right=dungcay(pre,in,mp,pre1+dc+1,pre2,vtri+1,in2);
    return root;
}

int dosau(Node *root) {
    if(!root) return 0;
    return 1+max(dosau(root->left),dosau(root->right));
}

void duyetsau(Node* root) {
    if(!root) return ;
    duyetsau(root->left);
    duyetsau(root->right);
    cout<<root->data<<' ';
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> pre(n),in(n);
        for(int i=0;i<n;i++) {
            cin>>pre[i]; in[i]=pre[i];
        }
        sort(begin(in),end(in));
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[in[i]] = i;
        Node *root = dungcay(pre,in,mp,0,n-1,0,n-1);
        cout<<dosau(root)-1<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}