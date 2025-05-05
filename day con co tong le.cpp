#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
void f(int i,int a[],int n,vector<int> &d) {
	if(i==n) {
		int sum=0;
		for(int i:d) sum+=i;
		if(sum%2==1) {
			for(int i:d) cout<<i<<' ';
			cout<<'\n';
		} return ;
	}f(i+1,a,n,d);
	d.push_back(a[i]);
	f(i+1,a,n,d) ;
	d.pop_back();
	
}

void test()
{
	int t; cin>>t;
	while(t--) {
		int n; cin>>n; int a[n];
		for(int &i:a) cin>>i;
		sort(a,a+n,greater<int>());
		vector<int> d;
		f(0,a,n,d);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
