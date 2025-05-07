#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(int i,int w,int a[],int c[],int n) {
	vector<int> pre(w+1,0) , cur(w+1,0);
	for(int j=a[0];j<=w;j++) pre[j] = c[0];
	for(int i=1;i<n;i++) {
		for(int j=0;j<=w;j++) {
			int notpick = pre[j] ;
			int pick = INT_MIN;
			if(j>=a[i] ) {
				pick = c[i] + pre[j-a[i]];
			}
			cur[j] = max(notpick,pick);
		}
		pre = cur;
	} 
	return pre[w];
}

void test()
{
	int t; cin>>t;
	while(t--) {
		int n,v; cin>>n>>v;
		int a[n],c[n];
		for(int &i:a) cin>>i;
		for(int &i:c) cin>>i;
		cout<<f(n-1,v,a,c,n)<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}