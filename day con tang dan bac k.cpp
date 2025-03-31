#include<bits/stdc++.h>
using namespace std;

int n , k ,x[100] , a[100] , dem = 0;

void Try(int i,int index,int k){
	for(int j=index;j<=n;j++){
		if(a[j]>x[i-1]) {
			x[i]=a[j];
			if( i== k ) dem++;
			else Try(i+1,j+1,k);
		}
	}
}
int main(){
	x[0] =-1;
	cin>>n>>k;
	for(int i=1;i<=n;i++ ) cin>>a[i];
	Try(1,1,k);
	cout<<dem;
}