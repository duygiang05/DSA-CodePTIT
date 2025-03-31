#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int gk=123456789;

ll powbin(ll a, ll b){
	if(b==0) return 1;
	ll c=powbin(a,b/2);
	if(b%2==0) return c*c%gk;
	else return (c*c%gk*a)%gk;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<powbin(2,n-1)<<endl;
	}
}