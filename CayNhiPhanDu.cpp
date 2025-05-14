#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    int data;
    Node *left,*right;
    Node(int val) :data(val),left(nullptr),right(nullptr) {}
};

void dungcay(Node* &root,int x,int y,char z) {
    if(!root) root=new Node(x);
    if(root->data == x) {
        if(z=='L') root->left = new Node(y);
        else root->right = new Node(y);
    } 
    if(root->left) dungcay(root->left,x,y,z);
    if(root->right) dungcay(root->right,x,y,z);
}

bool check(Node* root) {
    if(!root) return true;
    if(root->left == nullptr && root->right == nullptr) return true;
    if(root->left == nullptr || root->right == nullptr) return false;
    return (check(root->left) && check(root->right));
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,x,y; cin>>n;
        char z;
        Node *root =nullptr;
        while(n--) {
            cin>>x>>y>>z;
            dungcay(root,x,y,z);
        }
        if(check(root)) cout<<1<<'\n';
        else cout<<0<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}