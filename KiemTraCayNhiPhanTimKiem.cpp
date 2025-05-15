#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
bool check(vector<int> &v) {
    for(int i=1;i<v.size();i++) {
        if(v[i] <= v[i-1]) return false;
    }
    return true;
}
void test()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> v(n);
        for(int &i:v) cin>>i;
        if(check(v)) cout<<1<<'\n';
        else cout<<0<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}