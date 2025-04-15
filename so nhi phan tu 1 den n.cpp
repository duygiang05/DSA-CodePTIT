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
        queue<string> q;
        q.push("1");
        string s="";
        while(n--)
        {
            s=q.front();
            cout<<s<<' ';
            q.pop();
            q.push(s+"0");
            q.push(s+"1"); 
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}