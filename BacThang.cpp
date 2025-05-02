#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int dp[100001];
void test()
{
    int t; cin>>t;
    while(t--) {
        memset(dp,0,sizeof(dp));
        int n,k; cin>>n>>k;
        dp[0] =1,dp[1]=1;
        for(int i=2;i<=n;i++) {
            for(int j=1;j<=k;j++) {
                if(i-j>=0) dp[i] = ((dp[i]%MOD) + (dp[i-j]%MOD)) % MOD;
            }
        }
        cout<<dp[n]<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}