#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--) {

        int v,e,m; cin>>v>>e>>m;
        vector<vector<pair<int,int>>> dsk(v+1);

        set<pair<int,int>> st;

        while(e--) {
            int x,y,z; cin>>x>>y>>z;
            dsk[x].push_back({y,z}) ; dsk[y].push_back({x,z});
        }
        vector<int> ans(v+1,1e9);
        st.insert({0,m}); ans[m] = 0;
        
        while(!st.empty()) {
            auto it = *(st.begin()); st.erase(it);
            int node = it.second;
            int dis = it.first;
            for(auto x:dsk[node]) {
                int node2 = x.first;
                int dis2 = x.second;
                if(ans[node2] > dis + dis2) {
                    ans[node2] = dis + dis2;
                    st.insert({ans[node2],node2});
                }
            }
        }

        for(int i=1;i<=v;i++) cout<<ans[i]<<' ';
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}