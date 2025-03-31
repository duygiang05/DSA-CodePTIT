#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fibo[100];

void ktao(){
	fibo[0]=0 ; fibo[1]=1;
	for(int i=2;i<=92;i++){
		fibo[i]=fibo[i-2]+fibo[i-1];
	}
}

int dayxau(int n,ll k){
	if(n==1) return 0;
	if(n==2) return 1;
	if(k>fibo[n-2]) return dayxau(n-1,k-fibo[n-2]);
	else return dayxau(n-2,k);
}
int main(){
	int t; cin>>t;
	ktao();
	while(t--){
		int n; ll k;
		cin>>n>>k;
		cout<<dayxau(n,k)<<endl;
	}
}