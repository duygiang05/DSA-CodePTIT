#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> mtk(n,vector<int>(n,1e9));
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i==j) mtk[i][j] = 0;
            }
        }
        while(m--) {
            int x,y; cin>>x>>y; 
            mtk[x-1][y-1] = 1;
        }
        for(int k=0;k<n;k++) {
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    mtk[i][j] = min(mtk[i][j],mtk[i][k] + mtk[k][j]);
                }
            }
        }
        double dem =0 ;
        double tong = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(mtk[i][j] !=1e9 && mtk[i][j]) {
                    dem++; tong+= mtk[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(2)<<tong/dem<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}