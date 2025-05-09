#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void bfs(vector<vector<int>> &dsk,int s) {
    int n=dsk.size();
    vector<bool> used(n,false); used[0] = true;
    queue<int> q; q.push(s); used[s] = true;
    while(!q.empty()) {
        int x=q.front() ; q.pop();
        cout<<x<<' ';
        for(int y:dsk[x]) {
            if(!used[y]) {
                q.push(y); used[y] = true;
            }
        }
    }
}  
void test()
{
    int t; cin>>t;
    while(t--) {
        int v,e,V,x,y; cin>>v>>e>>V;
        vector<vector<int>> dsk(v+1);
        for(int i=0;i<e;i++) {
            cin>>x>>y; dsk[x].push_back(y); dsk[y].push_back(x);
        }
        bfs(dsk,V);
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}