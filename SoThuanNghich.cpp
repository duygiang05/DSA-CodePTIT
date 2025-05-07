#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(int n,int m,string a, string b) {
    int res=0;
    vector<int> pre (m+1,0) , cur (m+1,0);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(a[i-1] == b[j-1] ) {
                cur[j] = pre[j-1] +1; res=max(res,cur[j]);
            }
            else cur[j] = 0;
        }
        pre = cur;
    }
    return res;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        string a,b; cin>>a; b=a;
        int x=a.length(); 
        reverse(begin(a),end(a));
        cout<<f(x,x,a,b)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}