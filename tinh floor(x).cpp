#include<bits/stdc++.h>
using namespace std;

#define ll long long
int flo(ll a[],int n,ll x){
	int l=0, r=n-1 ,res=-1;
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
		int n; ll x;
		cin>>n>>x;
		ll a[n];
		for(ll &b:a) cin>>b;
		int res=flo(a,n,x);
		if(res!=-1) cout<<res+1<<endl;
		else cout<<res<<endl;
	}
}