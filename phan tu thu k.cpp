#include<bits/stdc++.h>
using namespace std;

int tron(int a[],int b[],int n,int m,int k){
	int i=0,j=0,dem=0;
	while(i<n&&j<m){
		if(a[i]<=b[j]){
			dem++; i++;
			if(dem==k) return a[i-1];
		}
		else {
			dem++; j++;
			if(dem==k) return b[j-1];
		}
	}
	while(i<n) {
		dem++; i++; if(dem==k) return a[i-1];
	}
	while(j<m){
		dem++; j++; if(dem==k) return b[j-1];
	}
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m];
		for(int &x:a) cin>>x;
		for(int &x:b) cin>>x;
		cout<<tron(a,b,n,m,k)<<endl;
	}
}