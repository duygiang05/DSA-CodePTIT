#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(vector<double> a,vector<double> b ,int n) {
    vector<int> dp(n,1);
    int res=1;
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[j] < a[i] && dp[i] < dp[j] +1 && b[j] > b[i] ) {
                dp[i] = dp[j] +1;
            }
        }
        res= max(res,dp[i]);
    }
    return res;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<double> a(n) , b(n);
        for(int i=0;i<n;i++ ) cin>>a[i]>>b[i];
        cout<<f(a,b,n)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}