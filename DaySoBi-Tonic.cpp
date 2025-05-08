#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(vector<int> &a,vector<int> &b,int n) {
    vector<int> dp1 =a,dp2=b; int res=0;
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[j] <a[i] && dp1[i] < dp1[j] +a[i] ) dp1[i] = dp1[j] +a[i];
        }
    }
    for(int i=n-1;i>=0;i--) {
        for(int j=n-1;j>i;j--) {
            if(b[j] < b[i] && dp2[i] < dp2[j] +b[i] ) dp2[i] = dp2[j] +b[i];
        }
    }
    for(int i=0;i<n;i++) {
        res=max(res,dp1[i] +dp2[i] -a[i]);
    }
    return res;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n),b(n);
        for(int &i:a) cin>>i; b=a;
        cout<<f(a,a,n)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}