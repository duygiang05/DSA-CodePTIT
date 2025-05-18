#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void f(vector<int> &v,int n,vector<string> &ans) {
    if(n<1) return ;
    string s="[";
    for(int i=0;i<n;i++) {
        s+=to_string(v[i]); if(i<n-1) s+=" ";
    }
    s+="]";
    ans.push_back(s);
    for(int i=0;i<n-1;i++) v[i]+=v[i+1];
    f(v,n-1,ans);
}
void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> v(n);
        for(int &i:v) cin>>i;
        vector<string> ans;
        f(v,n,ans);
        for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<' ';
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}