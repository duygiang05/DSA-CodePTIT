#include<bits/stdc++.h>
using namespace std;

#define in size_t

void test()
{
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> a(n),b;
		for(int &i:a) cin>>i;
		b=a; sort(begin(b),end(b));
		int l=0,r=n-1;
		bool check = true;
		while(l<=r) {
			if((a[l] == b[l] && a[r] == b[r]) ||(a[l] == b[r] && a[r] == b[l]) ) {
				l++; r--;
			} else {
				check = false; break;
			}
		}
		if(check) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}	
