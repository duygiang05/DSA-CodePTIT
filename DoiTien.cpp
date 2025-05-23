#include<bits/stdc++.h>
using namespace std;

#define in size_t

void test()
{
	vector<int> a ={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		int dem=0;
		for(int i=9;i>=0;i--) {
			if(n>=a[i]) {
				dem+=n/a[i]; n-=(a[i]*(n/a[i]));
			}
		}
		cout<<dem<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
