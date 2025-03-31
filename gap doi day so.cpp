#include<bits/stdc++.h>
using namespace std;

#define ll long long

int gapdoi(int n, ll k){
	ll x=pow(2,n-1);
	if(k==x) return n;
	if(k>x) return gapdoi(n-1,k-x);
	return gapdoi(n-1,k);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; ll k;
		cin>>n>>k;
		cout<<gapdoi(n,k)<<endl;
	}
}