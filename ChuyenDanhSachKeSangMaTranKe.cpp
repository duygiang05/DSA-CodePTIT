#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int n; cin>>n;
    cin.ignore();
    vector<vector<int>> mtk(n,vector<int>(n,0));
    for(int i=1;i<=n;i++) {
        string s; getline(cin,s);
        stringstream ss(s); int x;
        while(ss>>x) {
            mtk[i-1][x-1] = 1; mtk[x-1][i-1]=1;
        }
    }
    for(int i=0;i<mtk.size();i++) {
        for(int j:mtk[i]) cout<<j<<' ';
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}