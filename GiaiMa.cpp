#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        if(s[0]=='0') {
            cout<<0<<'\n'; continue;
        }
        int n=s.size();
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++) {
            if(s[i-1]-'0'>0) {
                dp[i] +=dp[i-1];
            }
            if(((s[i-2]-'0')*10+(s[i-1]-'0'))>9&&((s[i-2]-'0')*10+(s[i-1]-'0'))<=26) {
                dp[i] +=dp[i-2];
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