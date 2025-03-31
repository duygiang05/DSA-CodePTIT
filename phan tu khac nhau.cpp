#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		ll a[n],b[n-1];
		for(ll &x:a) cin>>x;
		for(ll &x:b) cin>>x;
		int i=0,j=0;
		while(i<n && j<n-1){
			if(a[i]!=b[j]) {
				cout<<i+1<<endl;
				break;
			}
			else {
				i++; j++;
			}
		}
	}
}