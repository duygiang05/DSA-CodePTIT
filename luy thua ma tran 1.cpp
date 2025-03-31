#include<bits/stdc++.h>
using namespace std;  

#define ll long long

const int mod=1e9+7;

int n; 

struct matran{
	ll x[11][11];
};

matran operator * (matran a,matran b){
	matran c;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c.x[i][j]=0;
			for(int k=0;k<n;k++){
				c.x[i][j]+=( a.x[i][k] % mod * b.x[k][j] % mod ) %mod ;
				c.x[i][j] %= mod;
			}
		}
	}
	return c;
}

matran powbin(int b,matran c){
	if(b==1) return c;
	matran d= powbin(b/2,c);
	if(b%2==1) return d * d * c;
	return d * d;
}
int main(){
	int t; cin>>t;
	while(t--){
		int k; cin>>n>>k;
		matran a;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a.x[i][j];
			}
		}
		matran b=powbin(k,a);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<b.x[i][j]<<' ';
			}
			cout<<endl;
		}
	}
}