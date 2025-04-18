#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int a['z' + 1]={0};
		for(char x:s) a[x] ++;
		int res = *max_element(a,a+'z'+1);
		if(res <= s.size()  - res +1) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	test();
}
