#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

int dayconchung(string a, string b, string c,int i ,int j ,int k ,vector<vector<vector<int>>> &dp) {
    // if(i<1 || j<1 || k< 1) return 0;
    // if(a[i-1] == b[j-1] && b[j-1] == c[k-1]) return 1+dayconchung(a,b,c,i-1,j-1,k-1,dp);
    // if(dp[i][j][k] != -1) return dp[i][j][k];
    // return dp[i][j][k] = max(dayconchung(a,b,c,i-1,j,k,dp),max(dayconchung(a,b,c,i,j-1,k,dp),dayconchung(a,b,c,i,j,k-1,dp)));
    for(int m=1;m<=i;m++) {
        for(int n=1;n<=j;n++) {
            for(int p=1;p<=k;p++) {
                if(a[m-1] == b[n-1] && b[n-1] == c[p-1]) dp[m][n][p] = 1+dp[m-1][n-1][p-1];
                else dp[m][n][p] = max({dp[m-1][n][p],dp[m][n-1][p],dp[m][n][p-1]});
            }
        }
    }
    return dp[i][j][k];
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int x,y,z; cin>>x>>y>>z;
        string a,b,c;
        cin>>a>>b>>c;
        vector<vector<vector<int>>> dp(x+1,vector<vector<int>> (y+1,vector<int>(z+1,0)));
        cout<<dayconchung(a,b,c,x,y,z,dp)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}