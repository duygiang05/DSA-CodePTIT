#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

int dfs(vector<vector<int>> &dsk,vector<int> &used,int u,int &res) {
    used[u] = 1; res++;
    for(int i:dsk[u]) {
        if(!used[i]) dfs(dsk,used,i,res);
    }
    return res;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int v,e,x,y; cin>>v>>e;
        vector<vector<int>> dsk(v+1);
        while(e--) {
            cin>>x>>y; dsk[x].push_back(y); dsk[y].push_back(x);
        }
        int ans = 0,res=1;
        vector<int> used(v+1,0);
        for(int i=1;i<=v;i++) {
            res=0;
            if(!used[i]) {
                ans = max(ans,dfs(dsk,used,i,res));
            }
        }
        cout<<ans<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}