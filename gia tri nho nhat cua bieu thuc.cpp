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
        ll a[n],b[n];
        for(ll &x:a) cin>>x;
        for(ll &x:b) cin>>x;
        sort(a,a+n); sort(b,b+n,greater<ll>());
        ll result = 0;
        for(int i=0;i<n;i++)
            result += a[i] * b[i];
        cout<<result<<endl; 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}