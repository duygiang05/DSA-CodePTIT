#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mod=1e9+7;

ll powBin(int a, ll b){
	if(b==0) return 1;
	ll tmp=powBin(a,b/2)%mod;
	if(b%2==0) return tmp*tmp%mod;
	else return ((tmp*tmp)%mod*a) % mod;
}
int main(){
	while(1){
		int a; ll b;
		cin>>a>>b;
		if(a==0 &&b==0) return 0;
		else cout<<powBin(a,b)<<endl; 
	}
}