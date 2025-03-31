#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mod=1e9+7;

struct matran{
	ll x[2][2];
};

matran operator * (matran a, matran b){
	matran c;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c.x[i][j]=0;
			for(int k=0;k<2;k++){
				c.x[i][j]+=(a.x[i][k] % mod *b.x[k][j] % mod )%mod;N
				c.x[i][j]%=mod;
			}
		}
	}
	return c;
}

matran powbin(int b,matran c){
	if(b==1) return c;
	matran tmp=powbin(b/2,c) ;
	if(b%2==0) return tmp*tmp;
	return tmp*tmp*c;
}
int main(){
	int t; cin>>t;
	matran a;
	a.x[0][0]=1; a.x[0][1]=1 ; a.x[1][0]=1 ;a.x[1][1]=0;
	while(t--){
		int n;
		cin>>n;
		cout<<powbin(n,a).x[0][1]<<endl;
	}
}