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
        int a[n] , f1[n] , f2[n];
        for(int &x : a) cin>>x;
        stack<int> st1 , st2;
        for(int i=n-1;i>=0;i--)
        {
            while(!st1.empty() && a[i] >= a[st1.top()]) st1.pop();
            if(st1.empty()) f1[i] = -1;
            else f1[i] = st1.top();
            st1.push(i);
        }
        for(int i = n-1;i>=0 ;i--)
        {
            while(!st2.empty() && a[i] <= a[st2.top()] ) st2.pop();
            if(st2.empty()) f2[i] = -1;
            else f2[i] = st2.top();
            st2.push(i);
        }
        for(int i=0;i<n;i++)
        {
            if(f1[i] != -1 && f2[f1[i]] != -1)
            {
                cout<<a[f2[f1[i]]]<<' ';
            }
            else cout<< -1<<' ';
        }
        cout<<endl;
    } 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test(); // test case 1 cua code ptit sai(2025)
}