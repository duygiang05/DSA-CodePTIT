#include<bits/stdc++.h>
using namespace std;

#define ll long long

int crossing(int a[],int l ,int r, int m){
	int sum=0;
	int sleft=-1e9, sright=-1e9;
	for(int i=m;i>=l;i--){
		sum+=a[i];
		sleft=max(sum,sleft);
	}
	sum=0;
	for(int i=m+1;i<=r;i++){
		sum+=a[i];
		sright=max(sright,sum);
	}
	return sright+sleft;
}
int maxsum(int a[],int l ,int r){
	if(l==r) return a[l];
	int mid=(l+r)/2;
	return max(max(maxsum(a,l,mid),maxsum(a,mid+1,r)),crossing(a,l,r,mid));
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		cout<<maxsum(a,0,n-1)<<endl;
	}
}