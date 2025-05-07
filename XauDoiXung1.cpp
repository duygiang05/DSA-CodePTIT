#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(int a,int b,string s,string s1) {
    vector<int> pre(b+1,0) , cur(b+1,0);
    for(int i=1;i<=a;i++) {
        for(int j=1;j<=b;j++) {
            if(s[i-1]==s1[j-1]) cur[j] = pre[j-1]+1;
            else cur[j] = max(pre[j] ,cur[j-1]);
        }
        pre = cur;
    }
    return pre[b];
}

void test()
{
    int t; cin>>t;
    while(t--) {
        string s; cin>>s; int i=s.length();
        string s1=s; reverse(begin(s),end(s));
        cout<<i-f(i,i,s,s1)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}