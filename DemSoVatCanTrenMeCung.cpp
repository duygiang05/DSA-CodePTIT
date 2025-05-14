#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

vector<pair<int,int>> d={{-1,0},{0,-1},{1,0},{0,1}};
char a[1001][1001];

void demvatcan(int n,int m,int p,int q) {
    a[n][m]='.';
    for(int i=0;i<4;i++) {
        int x=n+d[i].first,y=m+d[i].second;
        if(x>=0 && x<p && y>=0 && y<q && a[x][y] =='#') demvatcan(x,y,p,q);
    }
}

void test()
{
    int n,m ; cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    int dem=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j] =='#') {
                dem++; demvatcan(i,j,n,m);
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