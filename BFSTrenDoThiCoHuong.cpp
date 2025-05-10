#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void test()
{
    int t;cin>>t;
    while(t--) {
        int v,e,V,x,y; cin>>v>>e>>V;
        vector<vector<int>> dsk(v+1);
        while(e--) {
            cin>>x>>y; dsk[x].push_back(y);
        }
        vector<bool> used(v+1,false);
        queue<int> q; q.push(V);
        while(!q.empty()) {
            int s=q.front() ; q.pop() ;cout<<s<<' ';
            for(int i:dsk[s]) {
                if(!used[i]) {
                    q.push(i);used[s] = true;
                }
            }
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