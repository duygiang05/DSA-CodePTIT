#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int n; cin>>n;
    vector<vector<int>> mtk(n,vector<int>(n));
    vector<vector<int>> dsk(n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mtk[i][j];
            if(mtk[i][j] ==1) dsk[i].push_back(j+1);
        }
    }
    for(int i=0;i<dsk.size();i++) {
        for(int j:dsk[i]) cout<<j<<' ';
        cout<<'\n';
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}