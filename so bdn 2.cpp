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
        queue<ll> q;
        ll result = 1;
        q.push(1); ll s;
        while(1)
        {
            ll tmp = q.front(); q.pop();
            if(n == 1) break;
            s = tmp * 10; q.push(s);
            if(s % n == 0 ) 
            {
                result = s; break;
            }
            s = tmp * 10 + 1; q.push(s);
            if(s % n == 0 )
            {
                result = s; break;
            }
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