#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
bool chutrinh(vector<vector<int>> &dsk) {
    for(auto i :dsk) {
        if(i.size() %2==1) return false;
    }
    return true;
}
bool duongdi(vector<vector<int>> &dsk) {
    int cnt=0;
    for(auto i:dsk) 
        if(i.size() %2==1) 
            cnt++;
    if(cnt==2) return true;
    return false;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int u,v,x,y; cin>>u>>v;
        vector<vector<int>> dsk(u+1);
        while(v--) {
            cin>>x>>y; dsk[x].push_back(y); dsk[y].push_back(x);
        }
        if(chutrinh(dsk)) cout<<2;
        else if(duongdi(dsk)) cout<<1;
        else cout<<0;
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}