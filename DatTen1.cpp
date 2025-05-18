#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void in(vector<string> ans,int k) {
    if(ans.size() ==k) {
        for(string st:ans ) cout<<st<<' ';
        cout<<'\n';
    }
}
void f(int i,int m,vector<string> ans,vector<string> &v,int k) {
    if(i>=m) {
        in(ans,k); return ;
    }
    ans.push_back(v[i]);
    f(i+1,m,ans,v, k);
    ans.pop_back();
    f(i+1,m,ans,v, k);
}
void test()
{
    int n,k; cin>>n>>k;
    set<string> st;
    while(n--) {
        string s; cin>>s; st.insert(s);
    }
    vector<string> v,ans;
    for(auto it:st) v.push_back(it);
    int m=v.size();
    f(0,m,ans,v,k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}
