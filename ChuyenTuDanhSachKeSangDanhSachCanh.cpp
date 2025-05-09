#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int n; cin>>n; 
    cin.ignore();
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++) {
        string s; getline(cin,s);
        stringstream ss(s) ; int x;
        while(ss>>x) {
            if(x>i) v.push_back({i,x});
        }
    }
    for(auto it:v) cout<<it.first<<' '<<it.second<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}