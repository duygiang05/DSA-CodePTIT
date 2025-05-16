#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void tplt(vector<vector<int>> &dsk,vector<int> &used,int u,vector<int> &kq) {
    used[u] = 1; kq.push_back(u);
    for(int i:dsk[u]) {
        if(!used[i]) tplt(dsk,used,i,kq);
    }
}

bool check(vector<vector<int>> &dsk, vector<int> &kq) {
    int n=kq.size();
    int x=n*(n-1)/2;
    int result=0;
    for(int i:kq) {
        result += dsk[i].size();
    }
    result/=2;
    return result == x;
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
        bool ok=true;
        vector<int> used(v+1,0);
        for(int i=1;i<=v;i++) {
            if(!used[i]) {
                vector<int> kq;
                tplt(dsk,used,i,kq);
                if(!check(dsk,kq)) {
                    ok = false; break;
                }
            }
        }
        cout<<(ok ? "YES\n" : "NO\n");
    }
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}