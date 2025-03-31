#include<bits/stdc++.h>
using namespace std;
int n; 
int a[100];
int used[10];
int dcxuoi[100],dcnguoc[100];
int dem;

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]&& !dcxuoi[i-j+n] && !dcnguoc[i+j-1]){
			a[i]=j;
			used[j]=1; dcxuoi[i-j+n]=1; dcnguoc[i+j-1]=1;
			if(i==n) dem++;
			else Try(i+1);
			used[j]=0;dcxuoi[i-j+n]=0; dcnguoc[i+j-1]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		dem=0;
		Try(1);
		cout<<dem<<endl;
	}
	
}