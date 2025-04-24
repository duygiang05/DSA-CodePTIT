#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n], f[n];
		for(int &x : a) cin>>x;
		for(int &x : f) x=1;
		for(int i=1;i<n;i++){
			int res=0;
			for(int j=0;j<i;j++){
				if(a[j]<=a[i]){
					res=max(res,f[j]);
				}
			}
			f[i]+=res;
		}
		int res=*max_element(f,f+n);
		int result=max(res,n-res);
		cout<<result<<endl;
	}
	
}