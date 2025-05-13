#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    int data;
    Node *left, *right;
    Node (int val) : data(val),left(NULL),right(NULL) {} 
};

void dungcay(Node* &root,int x,int y,char z) {
    if(!root) return ;
    if(x==root->data) {
        if(z=='L') root->left=new Node(y);
        else root->right= new Node(y);
    }
    else {
        dungcay(root->left,x,y,z);
        dungcay(root->right,x,y,z);
    }
}

void duyettheomuc(Node* root) {
    queue<Node*> q;
    q.push(root) ;
    while(!q.empty()) {
        Node* cha = q.front() ; q.pop();
        cout<<cha->data<<' ';
        if(cha->left != NULL) q.push(cha->left);
        if(cha->right != NULL) q.push(cha->right); 
    }
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,x,y; cin>>n;
        Node *root = NULL;
        while(n--) {
            char z; cin>>x>>y>>z;
            if(!root) {
                root = new Node(x); 
                if(z=='L') root->left=new Node(y);
                else root->right = new Node(y);
            }
            else dungcay(root,x,y,z);
        }
        duyettheomuc(root);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}