#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int n,m; cin>>n>>m;
    vector<vector<int>> mtk (n+1,vector<int>(n+1,1e9));
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=n;j++) 
            if(i==j) mtk[i][j] = 0;
    while(m--) {
        int x,y,z; cin>>x>>y>>z;
        mtk[x][y] = z; mtk[y][x] = z;
    }
    for(int  k=1;k<=n;k++) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                mtk[i][j] = min(mtk[i][j],mtk[i][k]+mtk[k][j]);
            }
        }
    }
    int q; cin>>q;
    while(q--) {
        int u,v; cin>>u>>v;
        cout<<mtk[u][v]<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}