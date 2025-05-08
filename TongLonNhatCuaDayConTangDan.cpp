#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(vector<int> &a,int n) {
    vector<int> dp = a; int res=dp[0];
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[j] < a[i] && dp[i] < dp[j] +a[i]) dp[i] = dp[j] +a[i];
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
        vector<int> a(n);
        for(int &i:a) cin>>i;
        cout<<f(a,n)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}