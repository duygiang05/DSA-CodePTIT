#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
bool chutrinh(vector<vector<int>> &dsk,vector<int> &used,vector<int> &path,int u) {
    used[u] = true; path[u] = true;
    for(int i:dsk[u] ) {
        if(!used[i]) {
            if(chutrinh(dsk,used,path,i)) return true;
        }
        else {
            if(path[i]) return true;
        }
    }
    path[u]  =false;
    return false; 
}
bool check(vector<vector<int>> &dsk,vector<int> &used,vector<int> &path,int v) {
    for(int i=1;i<=v;i++) {
        if(!used[i]) {
            if(chutrinh(dsk,used,path,i)) return true;
        }
    }
    return false;
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
        vector<int> used(v+1,0),path(v+1,0);
        if(check(dsk,used,path,v)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}