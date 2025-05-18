#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void f(vector<int> &v,int n) {
    if(n<1) return ;
    cout<<'[';
    for(int i=0;i<n;i++) {
        cout<<v[i]; if(i<n-1) cout<<' ';
    }
    cout<<"]\n";
    for(int i=0;i<n-1;i++) v[i] +=v[i+1];
    f(v,n-1);
}
void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> v(n);
        for(int &i:v) cin>>i;
        f(v,n);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}