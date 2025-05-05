#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int dem;
string s;
void f(int i,int a[],int sum,vector<int> &d,int n) {
	if(i==n) {
		if(sum==0) {
			s+="(" ;dem++;
			for(int i=0;i<d.size() ;i++) {
				s+=to_string(d[i]);if(i<d.size() -1) s+=" ";
			}
			s+=") ";
		}
		return ;
	}
	if(sum>=a[i]) {
		d.push_back(a[i]);
		f(i,a,sum-a[i],d,n);
		d.pop_back();
	}
	f(i+1,a,sum,d,n);
}

void test()
{
	int t; cin>>t;
	while(t--) {
		dem=0; s="";
		int n; cin>>n; int a[n];
		for(int i=0;i<n;i++) {
			a[i] = n-i;
		}
		vector<int> d;
		f(0,a,n,d,n);
		cout<<dem<<'\n'<<s<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}