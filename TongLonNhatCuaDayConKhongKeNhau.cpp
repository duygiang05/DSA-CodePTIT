#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
        for(int &i:a) cin>>i;
        int pre=a[0];
        int pre2=0;
        for(int i=1;i<n;i++) {
            int pick = a[i]; if(i>1) pick += pre2;
            int notpick = pre;
            int cur = max(pick,notpick);
            pre2=pre;
            pre=cur;
        }
        cout<<pre<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}