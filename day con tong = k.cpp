#include<bits/stdc++.h>
using namespace std;
int n,k,dem;
int a[100],x[100];
void in(int i){
	cout<<"[";
	for(int j=1;j<=i;j++) {
		if(j==i) cout<<x[j];
		else cout<<x[j]<< ' ';
	}
	cout<<"] ";
}
void Try(int i,int index,int sum){
	for(int j=index;j<=n;j++){
		x[i]=a[j];
		sum+=a[j];
		if(sum==k) {
			in(i); dem++;
		}
		else Try(i+1,j+1,sum);
		sum-=a[j];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		dem=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		Try(1,1,0);
		if(dem==0) cout<<-1;
		cout<<endl;
	}