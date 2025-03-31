#include<bits/stdc++.h>
using namespace std;

int tknp(int a[],int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid+1;
		else if(a[mid]>x) r=mid-1;
		else l=mid+1;
	}
	return -1;
} 
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int &x:a) cin>>x;
		int tmp=tknp(a,n,k);
		if(tmp!=-1) cout<<tmp<<endl;
		else cout<<"NO\n";
	}
}