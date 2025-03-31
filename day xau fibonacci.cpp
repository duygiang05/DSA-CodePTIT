#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fibo[100]; 

void ktao(){
	fibo[1]=1; fibo[2]=1;
	for(int i=3;i<=92;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
char xaufibo(int n,ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=fibo[n-2]){
		return xaufibo(n-2,k);
	}
	else return xaufibo(n-1,k-fibo[n-2]);
}
int main(){
	ktao();
	int t; cin>>t;
	while(t--){
		int n; ll k;
		cin>>n>>k;
		cout<<xaufibo(n,k)<<endl;
	}
}