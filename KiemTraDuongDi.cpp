#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void bfs(vector<vector<int>> &dsk,vector<int> &used,vector<int> &pre,int u) {
    queue<int> q; q.push(u); used[u] = true;
    while(!q.empty()) {
        int v=q.front() ; q.pop() ;
        for(int i:dsk[v]) {
            if(!used[i]) {
                used[i] = true; q.push(i); pre[i] =v;
            }
        }
    }
}
void test()
{
    int t; cin>>t;
    while(t--) {
        int n,m,q,x,y,u,v; cin>>n>>m;
        vector<vector<int>> dsk(n+1);
        while(m--) {
            cin>>x>>y; dsk[x].push_back(y); dsk[y].push_back(x);
        }
        cin>>q;
        while(q--) {
            cin>>u>>v;
            vector<int> used(n+1,0),pre(n+1,0) ; pre[u]=u;
            bfs(dsk,used,pre,u);
            if(pre[v]) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}