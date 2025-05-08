#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(int x, int y, int z, int i) {
    if(i==0) return 0;
    if(i==1) return x; int len ;
    if(i%2 == 0 ) len = min(x+f(x,y,z,i-1),f(x,y,z,i/2) + z);
    else len=min(f(x,y,z,i-1)+x,f(x,y,z,(i+1)/2) +z+y);
    return len;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,x,y,z; cin>>n>>x>>y>>z;
        cout<<f(x,y,z,n)<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}