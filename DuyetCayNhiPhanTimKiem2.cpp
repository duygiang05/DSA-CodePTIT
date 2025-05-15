#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    int data;
    Node *left,*right;
    Node(int val) :data(val),left(nullptr),right(nullptr) {}
};

Node* dungcay(vector<int> &pre,vector<int> &in,int prestart,int preend,int instart,int inend,map<int,int> &mp) {
    if(prestart > preend || instart >inend) return nullptr;
    Node *root= new Node(pre[prestart]);
    int vitri = mp[root->data];
    int dichchuyen = vitri - instart ;
    root->left = dungcay(pre,in,prestart+1,prestart+dichchuyen,instart,vitri-1,mp);
    root->right = dungcay(pre,in,prestart + dichchuyen +1,preend,vitri+1,inend,mp);
    return root;
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
        Node *root =dungcay(pre,in,0,n-1,0,n-1,mp);
        duyetsau(root);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}