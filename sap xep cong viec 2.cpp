#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int deadline[n], profit[n];
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            int x; cin>>x>>deadline[i]>>profit[i];
            v.push_back({deadline[i],profit[i]});
        }
        sort(begin(v),end(v));
        priority_queue<int,vector<int>,greater<int>> job;
        for(auto p:v)
        {
            if(p.first > job.size()) job.push(p.second);
            else if(!job.empty() && job.top() < p.second)
            {
                job.pop(); job.push(p.second);
            }
        }
        int cnt = 0, result = 0;
        while(!job.empty()) 
        {
            cnt++;result+=job.top();job.pop();
        }
        cout<<cnt<<' '<<result<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}