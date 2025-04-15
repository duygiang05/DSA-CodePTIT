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
        queue<string> q;q.push("6");q.push("8");
        vector<string> v; v.push_back("6"); v.push_back("8");
        string s = "";
        while(1)
        {
            s = q.front(); q.pop();
            if(s.size() + 1 > n) break;
            q.push(s + "6") ; v.push_back(s + "6");
            q.push(s + "8") ; v.push_back(s + "8");
        }
        cout<<v.size()<<endl;
        for(string t: v) cout<<t<<' ';
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}