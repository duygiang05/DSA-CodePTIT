#include<bits/stdc++.h>
using namespace std;

int n , a[100][100] , x[100] , res=1e9 ,used[100] , minn=1e9;

void Try(int i,int sum){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			used[j]=1;
			x[i]=j;
			sum+=a[x[i-1]][x[i]];
			if(i == n){
				res=min(res,sum+a[x[n]][1]);
			}
			else if( sum + (n-i+1) * minn < res ) Try(i+1,sum);
			used[j]=0;
			sum-=a[x[i-1]][x[i]];
		}
	}
} 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]) minn=min(minn,a[i][j]);
		}
	}
	x[1]=1;
	used[1]=1;
	Try(2,0);
	cout<<res;
}