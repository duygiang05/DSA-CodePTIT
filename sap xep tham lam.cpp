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
		int a[n], b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]; b[i] = a[i];
		}
		sort(b,b+n);
		bool ok = true;
		for(int i=0;i<n;i++)
		{
			if(a[i] != b[i] && a[i] != b[n-i-1])
			{
				ok = false; break;
			}
		}
		if(ok) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}