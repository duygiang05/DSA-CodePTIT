#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        priority_queue<ll,vector<ll>,greater<ll>> q;
        for(int &x:a) 
        {
            cin>>x; q.push(x);
        } 
        ll result = 0 ;
        while(q.size() > 1)
        {
            ll tmp1 = q.top() % MOD; q.pop();
            ll tmp2 = q.top() % MOD ; q.pop();
            ll tmp3 = ( tmp1 + tmp2 ) % MOD ; q.push(tmp3); result += tmp3; result%=MOD;
        }
        cout<<result<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}