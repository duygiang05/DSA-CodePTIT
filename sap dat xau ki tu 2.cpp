#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--)
    {
        int d; cin>>d;
        string s; cin>>s; int a[256]={0};
        for(char x:s) a[x]++;
        bool ok = true;
        for(int i=0;i<256;i++)
        {
            if(a[i])
            {
                if(s.size() - a[i] < (a[i] -1) * (d-1)) 
                {
                    ok = false ; break;
                }
            }
        }
        if(ok) cout<<1<<endl;
        else cout<< -1<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}