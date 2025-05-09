#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void dfs(vector<vector<int>> &dsk,int s,vector<bool> &used,int i) {
    used[s] = true; cout<<s<<' '; i++;
    if(i==dsk.size() -1) return;
    for(int i=0;i<dsk[s].size();i++) {
        if(!used[dsk[s][i]]) dfs(dsk,dsk[s][i],used,i);
    }
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int v,e,V,x,y; cin>>v>>e>>V;
        vector<vector<int>> dsk(v+1);
        while(e--) {
            cin>>x>>y; dsk[x].push_back(y) ; dsk[y].push_back(x);
        }
        vector<bool> used(v+1,false);
        dfs(dsk,V,used,0);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}