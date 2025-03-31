#include<bits/stdc++.h>
using namespace std;

int a[100] , n ,x[100], dem ;

int sum (){
	int result=0;
	for(int i=1;i<=n;i++){
		result+=a[i];
	}
	return result;
}

void Try(int i,int index,int kq){
	for(int j=index;j<=n;j++){
		kq+=a[j];
		if(kq== sum()/2  || dem) {
			dem++; return;
		}
		else if(kq+a[j+1]<= sum()/2) Try(i+1,j+1,kq);
		kq-=a[j];
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		dem=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		if(sum()%2) cout<<"NO\n";
		else {
			Try(1,1,0);
			if(dem) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}
