#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

vector<pair<int,int>> d={{-1,0},{0,-1},{0,1},{1,0}};

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> mtk(n,vector<int>(m)),ans(n,vector<int>(m,1e9)) ;
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++) cin>>mtk[i][j];
        ans[0][0] = mtk[0][0];
        set<pair<int,pair<int,int>>> st;
        st.insert({ans[0][0],{0,0}});
        while(!st.empty()) {
            auto it= *(st.begin());
            st.erase(it);
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            for(int i=0;i<4;i++) {
                int row1 = row+d[i].first;
                int col1 = col + d[i].second;
                if(row1>=0 && col1 >=0 && row1<n & col1<m) {
                    if(dis + mtk[row1][col1] < ans[row1][col1]) {
                        ans[row1][col1] = dis + mtk[row1][col1] ;
                        st.insert({ans[row1][col1],{row1,col1}});
                    }
                }
            }
        }
        cout<<ans[n-1][m-1]<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}