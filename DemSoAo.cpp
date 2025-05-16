#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
vector<pair<int,int>> d={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

void dfs(vector<vector<char>> &a,int i,int j,int n,int m) {
    a[i][j]='.';
    for(int x=0;x<8;x++) {
        int x1=i+d[x].first;
        int x2=j+d[x].second;
        if(x1>=0 && x1 <n && x2>=0 && x2<m && a[x1][x2] == 'W') dfs(a,x1,x2,n,m);
    }
}

void test()
{
    int n,m; cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    int dem=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j] == 'W') {
                dem++; dfs(a,i,j,n,m);
            }
        }
    }
    cout<<dem;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}