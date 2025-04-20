#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int n,s;cin>>n>>s; int tmp = s;
    if((s == 0 && n > 1) ||s > 9* n) cout<<"-1 -1\n";
    else 
    {
        for(int i=0;i<n;i++)
        {
            int minn = max((i == 0 ? 1 : 0) , s - 9 * (n -i -1));
            cout<<minn;
            s -= minn;
        }
        cout<<' ';
        for(int i=9;i>=0;i--)
        {
            while(tmp >= i && n > 0)
            {
                cout<<i; tmp-=i; n--;
            }
        }
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}