#include<bits/stdc++.h>
using namespace std;

void test()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		a[0] =-1;
		stack<int> st; st.push(0);
		for(int i=1;i<=n;i++)
		{
			while(st.size() > 1 && a[i] >= a[st.top()]) st.pop();
			cout<<i-st.top()<<' ';
			st.push(i);
		}
		cout<<endl;
	}
}

int main()
{
	// freopen("C:/sublime text/input.txt","r",stdin);
	// freopen("C:/sublime text/output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	test();
}