#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int dfs(vector<vector<int>> &dsk,int u,int &x,vector<int> &used) {
    used[u] = true;
    for(int i:dsk[u]) {
        if(!used[i]) {
            x++; dfs(dsk,i,x,used);
        }
    }
    return x;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int v,e,x,y; cin>>v>>e;
        vector<vector<int>> dsk(v+1);
        while(e--) {
            cin>>x>>y; dsk[x].push_back(y);
        }
        bool ok=true;
        int xs=1;
        for(int i=1;i<=v;i++) {
            vector<int> used(v+1,0);
            if(dfs(dsk,i,xs,used) < v) {
                ok=false; break;
            }
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}   