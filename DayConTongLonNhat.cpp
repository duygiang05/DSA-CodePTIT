#include<bits/stdc++.h>
using namespace std;

#define in size_t

void test()
{
	in n,q; cin>>n>>q;
	vector<int> a(n),dp(n+1,0);
	for(int &i:a) cin>>i;
	for(int i=1;i<=n;i++) {
		dp[i] = max({dp[i-1] + a[i-1],dp[i-1],a[i-1]});
	}
	while(q--) {
		int l,r; cin>>l>>r;
		cout<<dp[r] - dp[l-1]<<'\n';
	}
}	

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}