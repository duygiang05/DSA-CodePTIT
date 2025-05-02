#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
bool dp[1000001];
void test()
{
    int c,n; cin>>c>>n;
    int w[n];
    for(int &x:w) cin>>x;
    dp[0] = true;
    for(int i=0;i<n;i++) {
        for(int j=c;j>=w[i];j--) {
            if(dp[j-w[i]]) dp[j] = true;
        }
    }
    for(int j=c;j>=0;j--) {
        if(dp[j]) {
            cout<<j; break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}