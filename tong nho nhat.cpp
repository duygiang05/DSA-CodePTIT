#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
    int t; cin>>t;
    while(t--)
    {
        int n ;cin>>n;
        int a[n]; 
        for(int &x:a) cin>>x;
        sort(a,a+n); stack<int> st;
        for(int x:a) st.push(x);
        int cnt = 0; ll s1 = 0 ,s2 = 0 ;
        while(!st.empty())
        {
            s1 = st.top() * pow(10,cnt) + s1;st.pop();
            if(!st.empty())
            {
                s2 = st.top() * pow(10,cnt) + s2; st.pop();
            }
            cnt++;
        }
        cout<<s1+s2<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}