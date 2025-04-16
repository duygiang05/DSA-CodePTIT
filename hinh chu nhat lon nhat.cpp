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
        int a[n+2];
        for(int i=1;i<=n;i++) cin>>a[i];
        stack<int> st,st2;
        a[n+1] = -1e9; a[0] = -1e9;
        st.push(n+1);
        st2.push(0);
        int f[n+2], f2[n+2];
        for(int i=n;i>=1;i--)
        {
            while(!st.empty() && a[i] <= a[st.top()]) st.pop();
            f[i] = st.top() - i -1;
            st.push(i);
        } // f[i] lưu số lượng ptu liên tiếp nhỏ hơn a[i] phía bên phải
        for(int i=1;i<=n;i++)
        {
            while(!st2.empty() && a[i] <= a[st2.top()]) st2.pop();
            f2[i] = i- st2.top() -1;
            st2.push(i);
        } // f2[i] lưu số lượng ptu liên tiếp nhỏ hơn a[i] phía bên trái
        ll res = 0;
        for(int i=1;i<=n;i++) res = max(res,1ll*a[i]*(f2[i]+f[i]+1));
        cout<<res<<endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}