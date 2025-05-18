#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void f(vector<vector<int>> &a,string s,int i,int j,int n,vector<string> &check) {
    if(i==n-1 && j==n-1) {
        check.push_back(s); return ;
    }
    a[i][j] = 0;
    if(i+1<n && a[i+1][j]) {
        f(a,s+"D",i+1,j,n,check);
    }
    if(j+1<n&& a[i][j+1]) {
        f(a,s+"R",i,j+1,n,check);
    }
    a[i][j] = 1;
}
void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<vector<int>> a(n,vector<int>(n));
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        vector<string> ans;
        string s="";
        if(a[0][0]) {
            f(a,s,0,0,n,ans);
        }
        if(ans.empty()) 
            cout<<-1;
        else {
            sort(begin(ans),end(ans));
            for(string st:ans ) cout<<st<<' ';
        }
        cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}
