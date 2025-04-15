#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

int m,n,a[1005][1005],result[1005][1005];
void test()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>m>>n;
        memset(result,-1,sizeof(result));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++) cin>>a[i][j];
        }
        result[1][1]=0;
        pair<int,int> p ;
        queue<pair<int,int>> q;q.push({1,1});
        int res = -1;
        while(1)
        {   
            if(q.empty()) break;
            p = q.front();q.pop();
            int x = p.first,y = p.second;
            if(a[x][y] + x <= m ) 
            {
                pair<int,int> pp =make_pair(x+a[x][y],y);
                
                if(result[pp.first][pp.second] == -1)
                {
                    q.push(pp);
                    result[pp.first][y] = result[x][y] + 1 ;
                
                    if(pp.first == m && pp.second == n)
                    {
                        res = result[m][n]; break;
                    }
                }
            }
            if(a[x][y] + y <= n) 
            {
                pair<int,int> pp = make_pair(x,a[x][y]+y);
                if(result[x][pp.second] == -1)
                {
                    q.push(pp);
                    result[x][pp.second] = result[x][y] + 1;
                    if(pp.first == m && pp.second == n) 
                    {
                        res = result[m][n]; break;
                    }
                }
                
            }
            if(q.empty()) break;
        }
        cout<<res<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}