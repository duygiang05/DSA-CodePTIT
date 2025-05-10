#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void bfs(vector<vector<int>> &dsk,vector<int> &used,int u) {
    queue<int> q; q.push(u); used[u] = true;
    while(!q.empty()) {
        int v=q.front(); q.pop();
        for(int i :dsk[v] ) {
            if(!used[i]) {
                used[i] = true; q.push(i);
            }
        }
    }
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int v,e,x,y; cin>>v>>e;
        vector<vector<int>> dsk(v+1);
        vector<int> used(v+1,0);
        while(e--) {
            cin>>x>>y; 
            if (x < 1 || x > v || y < 1 || y > v) {
                continue; // Bỏ qua cạnh không hợp lệ
            }
            dsk[x].push_back(y) ; dsk[y].push_back(x);
        }
        int cnt=0;
        for(int i=1;i<=v;i++) {
            if(!used[i]) {
                bfs(dsk,used,i); cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}