#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void f(string &s,vector<int> &mp,vector<char> &ans) {
    if(ans.size() == s.size()) {
        for(char x:ans) cout<<x;
        cout<<' '; return ;
    }
    for(size_t i= 0;i<s.size();i++) {
        if(!mp[i]) {
            ans.push_back(s[i]);
            mp[i] = 1;
            f(s,mp,ans);
            ans.pop_back();
            mp[i] = 0;
        }
    }
}
void test()
{
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        size_t n = s.size();
        vector<int> mp(n,0);
        vector<char> ans;
        f(s,mp,ans);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}