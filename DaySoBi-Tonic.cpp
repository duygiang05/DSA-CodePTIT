#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(vector<int> &a,int n) {
    vector<int> dp1 =a,dp2=a; int res=0;
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[j] <a[i] && dp1[i] < dp1[j] +a[i] ) dp1[i] = dp1[j] +a[i];
        }
    }
    for(int i=n-1;i>=0;i--) {
        for(int j=n-1;j>i;j--) {
            if(a[j] <a[i] && dp2[i] < dp2[j] +a[i] ) dp2[i] = dp2[j] +a[i];
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
        vector<int> a(n);
        for(int &i:a) cin>>i; 
        cout<<f(a,n)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}
