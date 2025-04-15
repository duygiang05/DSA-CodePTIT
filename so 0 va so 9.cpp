#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int result=0;
        int s=0; int tmp=0;
        queue<int> q;
        q.push(9);
        while(1)
        {
            tmp=q.front();
            q.pop();
            if(tmp  % n == 0)
            {
                result = tmp  ; break;
            }
            s=tmp*10;q.push(s);
            if(s % n == 0) 
            {
                result = s; break;
            }
            s=tmp*10+9;q.push(s);
            if(s % n == 0)
            {
                result = s;break;
            }
        }
        cout<<result<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}