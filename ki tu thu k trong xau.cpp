#include<bits/stdc++.h>
using namespace std;

#define ll long long

int kitu(int n,ll k){
	ll tmp=pow(2,n-1);
	if(tmp==k) return n;
	if(tmp<k) return kitu(n-1,k-tmp);
	return kitu(n-1,k);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; ll k;
		cin>>n>>k;
		char c='A'+(kitu(n,k)-1);
		cout<<c<<endl;
	}
}