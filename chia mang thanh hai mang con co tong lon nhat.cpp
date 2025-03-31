#include<bits/stdc++.h>
using namespace std;

int tong(int a[],int l ,int r){
	int sum=0;
	for(int i=l;i<=r;i++) sum+=a[i];
	return sum;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n];
		for(int &x:a) cin>>x;
		sort(a,a+n,greater<int>());
		int t1=n-k; if(t1<k) swap(t1,k); 
		cout<<tong(a,0,t1-1)-tong(a,t1,n-1)<<endl;
	}
}