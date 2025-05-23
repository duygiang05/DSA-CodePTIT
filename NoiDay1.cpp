#include<bits/stdc++.h>
using namespace std;

#define in size_t
#define ll long long
void test()
{
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		priority_queue<ll,vector<ll> , greater<ll>> q;
		while(n--) {
			int x; cin>>x; q.push(x);
		}
		ll ans=0;
		while(q.size()>1) {
			ll x1=q.top(); q.pop();
			ll x2=q.top();q.pop();
			ans+=x1+x2; q.push(x1+x2);
		}
		cout<<ans<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
