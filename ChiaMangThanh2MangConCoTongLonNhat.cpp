#include<bits/stdc++.h>
using namespace std;

#define in size_t

void test()
{
	int t; cin>>t;
	while(t--) {
		int n,k; cin>>n>>k;
		int tmp=n-k; if(tmp<k) swap(tmp,k);
		vector<int> a(n);
		for(int &i:a) cin>>i;
		sort(begin(a),end(a),greater<int>());
		int res1=0,res2=0;
		for(int i=0;i<n;i++) {
			if(i<tmp) res1+=a[i];
			else res2+=a[i];
		}
		cout<<res1-res2<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
