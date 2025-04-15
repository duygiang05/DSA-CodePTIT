#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--)
    {
        ll n ; cin>>n;
        int count =1;
        queue<ll> q;
        ll s;
        q.push(1);
        while(1)
        {
            if (n == 1) break;
            ll tmp = q.front();
            q.pop();
            s = tmp * 10 ;q.push(s);
            if(s <= n) count++;
            else break;
            s = tmp * 10 + 1; q.push(s);
            if(s  <= n) count ++;
            else break;
        }
        cout<<count<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}