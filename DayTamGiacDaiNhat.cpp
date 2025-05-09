#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
vector<int> f(vector<int> &a) {
    int n=a.size();
    vector<int> dp(n,1);
    for(int i=1;i<n;i++) {
        if(a[i] >a[i-1] ) dp[i] = dp[i-1] +1;
    }
    return dp;
}
int f1(vector<int> &a) {
    int n= a.size() ;
    vector<int> v1,v2;
    v1=f(a);
    reverse(begin(a),end(a));
    v2=f(a);
    reverse(begin(v2),end(v2));
    int res=0;
    for(int i=0;i<n;i++) {
        res=max(res,v1[i] + v2[i] -1);
    }
    return res;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int &i:a)  cin>>i;
        cout<<f1(a)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}