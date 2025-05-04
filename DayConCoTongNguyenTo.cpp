#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int nt(int n){
	for(int i=2;i<=sqrt(n);i++ ){
		if(n%i==0) return 0;
	}
	return n>1;
}
void f(int a[],int i,int n,vector<int> &v,vector<string> &result){
	if(i==n) {
		int sum =0;
		for(int x:v) sum+=x;
		if(nt(sum)) {
			string s="";
			for(int x:v) {
				s+=to_string(x) +" ";
			} result.push_back(s);
		} return ;
	}
	v.push_back(a[i]);
	f(a,i+1,n,v,result);
	v.pop_back();
	f(a,i+1,n,v,result);
}

void test()
{
	int t; cin>>t;
	while(t--) {
		vector<string> result;
		int n; cin>>n;
		int a[n];
		for(int &i:a) cin>>i;
		sort(a,a+n,greater<int>());
		vector<int> v;
		f(a,0,n,v,result);
		for(int i=result.size()-1;i>=0;i--) {
			cout<<result[i]<<'\n';
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}	