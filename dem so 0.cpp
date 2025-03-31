#include<bits/stdc++.h>
using namespace std;

int dem0(int a[],int x,int n){
	int l=0, r=n-1, res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]<=x){
			res=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		int tmp=dem0(a,0,n);
		if(tmp!=-1) cout<<tmp+1<<endl;
		else cout<<0<<endl;
	}
}