#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll powbin(int a, int b){
	if(b==0) return 1;
	ll tmp=powbin(a,b/2)%mod;
	if(b%2==1){
		return (tmp*tmp)%mod*a%mod;
	}
	else return tmp*tmp%mod;
}

int main(){
	int t; cin>>t;
	while(t--){
		int a,b; cin>>a>>b;
		cout<<powbin(a,b)<<endl;
	}
}