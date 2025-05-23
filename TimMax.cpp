#include<bits/stdc++.h>
using namespace std;

#define in size_t
const int MOD=1e9+7;

void test()
{
	int t; cin>>t;
	while(t--) {
		in n,res=0; cin>>n;
		vector<int> a(n);
		for(int &i:a) cin>>i;
		sort(begin(a),end(a));
		for(int i=0;i<n;i++) {
			res+=(a[i]*i)%MOD;
			res%=MOD;
		}
		cout<<res<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
