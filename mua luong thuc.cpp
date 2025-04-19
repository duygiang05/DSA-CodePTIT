#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--)
    {
        int n,s,m; cin>>n>>s>>m;
        int can = s - (s/7);
        if(can * n < m * s) cout<< -1<<endl;
        else cout<<ceil(double(s * m) / n)<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}