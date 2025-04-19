#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int n; cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    int dp[n+2] ={0}; int res=0;
    for(int i=0;i<n;i++)
    {
        dp[a[i]] = dp[a[i]-1] +1;
        res = max(res,dp[a[i]]);
    }
    cout<<n-res<<endl;
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}