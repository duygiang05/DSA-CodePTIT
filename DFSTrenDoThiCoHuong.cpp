#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void dfs(vector<vector<int>> &dsk,vector<bool> &used,int s,int i) {
    used[s] = true; i++; cout<<s<<' '; 
    if(i==dsk.size() -1) return;
    for(int j=0;j<dsk[s].size();j++) {
        if(!used[dsk[s][j]]) dfs(dsk,used,dsk[s][j],i);
    }
}

void test()
{
    int t; cin>>t;
    while(t-- ) {
        int v,e,V,x,y; cin>>v>>e>>V;
        vector<vector<int>> dsk(v+1);
        while(e--) {
            cin>>x>>y; dsk[x].push_back(y);
        }
        vector<bool> used(v+1,false);
        dfs(dsk,used,V,0);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}