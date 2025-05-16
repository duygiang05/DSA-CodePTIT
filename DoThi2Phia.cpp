#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

bool dothi2phia(vector<vector<int>> &dsk,vector<int> &color,int u) {
    queue<int> q;
    q.push(u); color[u] = 0;
    while(!q.empty()) {
        int v=q.front() ; q.pop();
        for(int i:dsk[v]) {
            if(color[i] == -1) {
                color[i] = !color[v];
                q.push(i);
            }
            else if(color[i] == color[v]) return false;
        }
    }
    return true;
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
        vector<int> color(v+1,-1);
        bool check=true;
        for(int i=1;i<=v;i++) {
            if(color[i] == -1) {
                if(!dothi2phia(dsk,color,i)) {
                    check = false; break;
                }
            }
        }
        cout<<(check ? "YES\n" :"NO\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}