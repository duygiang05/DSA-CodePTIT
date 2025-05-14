#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    int data ;
    Node *left,*right;
    Node(int val) :data(val),left(nullptr),right(nullptr) {}
};

int dosau(Node* root) {
    if(!root) return 0;
    return 1+max(dosau(root->left),dosau(root->right));
}

bool cayhoanhao(Node* root,int d) {
    if(!root) return true;
    if(root->left == nullptr && root->right == nullptr) 
        return d==1;
    if(root->left == nullptr || root->right == nullptr) return false;
    return (cayhoanhao(root->left,d-1) && cayhoanhao(root->right,d-1));
} 

void dungcay(Node* &root,int x , int y, char z) {
    if(!root) root=new Node(x);
    if(root->data == x) {
        if(z=='L') root->left=new Node(y);
        else root->right = new Node(y);
    }
    if(root->left) dungcay(root->left,x,y,z);
    if(root->right) dungcay(root->right,x,y,z);
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,x,y; cin>>n;
        char z;
        Node* root=nullptr;
        while(n--) {
            cin>>x>>y>>z;
            dungcay(root,x,y,z);
        }
        int d=dosau(root);
        if(cayhoanhao(root,d)) cout<<"Yes\n";
        else cout<<"No\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}