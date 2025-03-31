#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mod=1e9+7;

ll dao(ll a){
	ll res=0;
	while(a){
		res=res*10+a%10;
		a/=10;
	}
	return res;
}
ll powBin(ll a, ll b){
	if(b==0) return 1;
	ll c=powBin(a,b/2)%mod;
	if(b%2==0) return c*c%mod;
	else return ((c*c)%mod*a)%mod;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll a; cin>>a;
		ll b=dao(a);
		cout<<powBin(a,b)<<endl;
	}
}