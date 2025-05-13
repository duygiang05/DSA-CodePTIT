#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

struct Node {
    char x;
    Node *left,*right;
    Node(char val) :x(val),left(NULL),right(NULL) {} 
};

Node* dungcay (const string &s) {
    stack<Node*> st;
    for(char c:s) {
        if(isalnum(c)) {
            st.push(new Node(c));
        }
        else {
            Node *root = new Node(c);
            Node *phai = st.top(); st.pop();
            Node *trai = st.top() ; st.pop();
            root->left = trai;
            root->right = phai;
            st.push(root);
        }
    }
    return st.top();
}
void duyetcay(Node *root) {
    if(!root) return ;
    duyetcay(root->left);
    cout<<root->x;
    duyetcay(root->right);
}

void test()
{
    int t;cin>>t;
    while(t--) {
        string s; cin>>s;
        Node *root = dungcay(s);
        duyetcay(root);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}