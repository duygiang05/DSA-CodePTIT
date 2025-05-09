#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--) {
        int v,e; cin>>v>>e;
        vector<vector<int>> dinh(v+1);
        int x,y;
        while(e--) {
            cin>>x>>y; dinh[x].push_back(y); dinh[y].push_back(x);
        }
        for(int i=1;i<=v;i++) {
            cout<<i<<": ";
            for(int x: dinh[i] ) cout<<x<<' ';
            cout<<'\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}   