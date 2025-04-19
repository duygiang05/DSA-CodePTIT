#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--)
    {
        int k ,a[256] ={0}; cin>>k;
        string s; cin>>s;
        for(char x:s) a[x]++;
        priority_queue<int> q;
        for(int x:a) 
        {
            if(x > 0 ) q.push(x);
        }
        while(k > 0 && q.size() > 1)
        {
            int tmp = q.top(); q.pop();
            tmp--; k--; q.push(tmp);
        }
        ll res = 0;
        while(!q.empty() ) 
        {
            res += pow(q.top(),2); q.pop();
        }
        cout<<res<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}