#include<bits/stdc++.h>
using namespace std;

#define in size_t

int f(int i,int j,vector<vector<int>> &v) {
	if(i<0 || j<0) return 0;
	if(i==0 && j==0) return 1;
	int len = f(i-1,j,v);
	int trai = f(i,j-1,v);
	return len+trai;
}

void test()
{
	int t; cin>>t;
	while(t--) {
		int n,m; cin>>n>>m;
		vector<vector<int>> v(n,vector<int>(m));
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) cin>>v[i][j];
		}
		cout<<f(n-1,m-1,v)<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
