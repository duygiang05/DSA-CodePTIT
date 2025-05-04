#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

int f(vector<vector<ll>> &a,int i,int j,vector<vector<ll>> &dp) {
    if(i==0 && j==0) return a[i][j];
    if(i<0 || j<0) return MOD;
    if(dp[i][j] !=-1) return dp[i][j];
    ll u=a[i][j] + f(a,i-1,j,dp);
    ll l=a[i][j] + f(a,i,j-1,dp);
    ll c=a[i][j] + f(a,i-1,j-1,dp) ;
    return dp[i][j] =min(l,(min(c,u)));
}
void test()
{
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        vector<vector<ll>> a(n,vector<ll>(m));
        vector<vector<ll>> dp(n,vector<ll>(m,-1));
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        cout<<f(a,n-1,m-1,dp)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}