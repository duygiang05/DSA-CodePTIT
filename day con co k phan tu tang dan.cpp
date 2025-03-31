#include<bits/stdc++.h>
using namespace std;

int n, k , a[100] , x[100] ;

void in(){
	for(int j=1;j<=k;j++) cout<<x[j]<<' '; 
	cout<<endl;
}
void Try(int i,int index){
	for(int j=index;j<=n;j++){
		x[i]=a[j];
		if( i == k ) in();
		else Try(i+1,j+1);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		Try(1,1);
	}
}