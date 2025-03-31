#include<bits/stdc++.h>

using namespace std;

int n,a[100];
int used[10]; 

bool check(int i){
	return (abs(a[i]-a[i+1] ) >1 && abs(a[i-1]-a[i])>1);
}

void in(){
	for(int i=1;i<=n;i++){
		if(i>1 && i<n && !check(i)) return ;
	}
	for(int i=1;i<=n;i++ ) cout<<a[i];
	cout<<endl;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j; used[j]=1;
			if(i==n) in();
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t; cin>>t; 
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) a[i]=i;
		Try(1);
	}
}