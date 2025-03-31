#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mod=1e9+7;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		ll a[n];
		ll result=0;
		for(ll &x : a) cin>>x;
		sort(a,a+n);
		for(int i=1;i<n;i++){
			result+= (i%mod * a[i] %mod) %mod;
			result%=mod;
		} 
		cout<<result<<endl;
	}
}