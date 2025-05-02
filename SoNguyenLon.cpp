#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int dp[1001][1001];

void test()
{
    int t; cin>>t;
    while(t--) {
        memset(dp,0,sizeof(dp));
        string s,t; cin>>s>>t;
        int n=s.size(),m=t.size();
        for(int i=1;i<=n;i++) dp[i][0]=0;
        for(int i=1;i<=m;i++) dp[0][i]=0;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[n][m]<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}