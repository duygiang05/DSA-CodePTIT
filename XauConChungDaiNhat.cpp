#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int f(int n,int m,string a,string b) {
	vector<int> pre (m+1,0) , cur(m+1,0) ;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			if(a[i-1] == b[j-1]) {
				cur[j] = pre[j-1] +1;
			}
			else cur[j] = max(pre[j] , cur[j-1]);
		}
		pre = cur;
	}
	return pre[m];

}

void test()
{
	int t; cin>>t;
	while(t--) {
		string a,b; cin>>a>>b;
		int i=a.size(),j=b.size();
		cout<<f(i,j,a,b)<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}