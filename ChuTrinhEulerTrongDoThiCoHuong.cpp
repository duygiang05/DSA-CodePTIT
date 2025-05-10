#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
bool chutrinh(vector<int> &in,vector<int> &out,int n) {
    for(int i=1;i<=n;i++) 
        if(in[i] != out[i] ) 
            return false;
    return true;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int v,e,x,y; cin>>v>>e;
        vector<int> in(v+1,0),out(v+1,0);
        while(e--) {
            cin>>x>>y; in[y]++; out[x]++; 
        }
        if(chutrinh(in,out,v)) cout<<1<<'\n';
        else cout<<0<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}