#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void dfs(vector<vector<int>> &dsk,vector<int> &used,vector<int> &pre,int u) {
    used[u] = 1;
    for(int i:dsk[u]) {
        if(!used[i]) {
            pre[i]=u; dfs(dsk,used,pre,i);
        }
    }
}
void test()
{
    int t;cin>>t;
    while(t--) {
        int v,e,a,b,x,y,index; cin>>v>>e>>a>>b;
        vector<vector<int>> dsk(v+1);
        while(e--) {
            cin>>x>>y; dsk[x].push_back(y);
        }
        vector<int> used(v+1,0),pre(v+1,0); pre[a] = a;
        dfs(dsk,used,pre,a);
        if(!pre[b]) cout<<-1;
        else {
            vector<int> result;
            index=b;
            while(index != pre[index] ) {
                result.push_back(index); index= pre[index];
            } 
            cout<<a<< ' '; for(int i =result.size() -1;i>=0;i--) cout<<result[i]<<' ';
        }
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}