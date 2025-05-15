#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    int data;
    Node *left,*right;
    Node(int val) :data(val),left(nullptr),right(nullptr) {}
};

void dungcay(Node* &root,int val) {
    if(!root) {
        root= new Node(val) ; return ;
    }
    if(val<root->data) dungcay(root->left,val);
    else dungcay(root->right,val);
}

void duyettruoc(Node* root) {
    if(!root) return ;
    cout<<root->data<<' ';
    duyettruoc(root->left);
    duyettruoc(root->right);
    delete root;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> v(n);
        for(int &i:v) cin>>i;
        Node* root = nullptr;
        for(int i:v) {
            dungcay(root,i);
        }
        duyettruoc(root);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}