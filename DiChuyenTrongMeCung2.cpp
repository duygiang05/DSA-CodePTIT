#include<bits/stdc++.h>
using namespace std;

#define in size_t

vector<pair<int,int>> d = {{1,0},{0,-1},{0,1},{-1,0}};
bool check = false;
string ss(int i) {
	if(i==0) return "D";
	if(i==1) return "L";
	if(i==2) return "R";
	return "U";
}

void f(vector<vector<int>> &v,int i,int j,string s,int n) {
	if(i==n-1 && j==n-1) {
		cout<<s<<' '; check = true; return ;
	}
	for(int k=0;k<4;k++) {
		int x=i+d[k].first;
		int y=j+d[k].second;
		if(x>=0 && x<n && y>=0 &&y<n &&v[x][y]) {
			v[x][y]=0; 
			f(v,x,y,s+ss(k),n);
			v[x][y] = 1;
		}
	}
}

void test()
{
	int t; cin>>t;
	while(t--) {
		check = false;
		int n; cin>>n;
		vector<vector<int>> v(n,vector<int>(n));
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) cin>>v[i][j];
		}
		string s="";
		if(v[0][0] && v[n-1][n-1]) {
			v[0][0] = 0;
			f(v,0,0,s,n);
		}
		if(!check) cout<<-1;
		cout<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
