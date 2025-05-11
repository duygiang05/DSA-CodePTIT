#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

vector<pair<int,int>> d={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

void dfs(vector<vector<int>> &mt,int i,int j,int n,int m) {
    mt[i][j] = 0;
    for(int k=0;k<8;k++) {
        int a=i+d[k].first , b=j+d[k].second;
        if(a>=0 && a<n && b>=0 && b<m && mt[a][b]) dfs(mt,a,b,n,m);
    }
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,m,res=0; cin>>n>>m;
        vector<vector<int>> mt(n,vector<int>(m));
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) cin>>mt[i][j];
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(mt[i][j]) {
                    dfs(mt,i,j,n,m); res++;
                }
            }
        }
        cout<<res<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}