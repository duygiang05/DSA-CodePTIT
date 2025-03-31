#include<bits/stdc++.h>
using namespace std;


int a[100][100], cot[10], dcxuoi[20] , dcng[20];
int dem,sum=0;

int maxx;

void Try(int i){
	for(int j=1;j<=8;j++){
		if(cot[j]==0 && dcxuoi[i-j+8]==0 && dcng[i+j-1]==0 ){
			sum+=a[i][j];
			cot[j]=1; dcxuoi[i-j+8]=1; dcng[i+j-1]=1;
			if( i==8 ) {
				maxx=max(sum,maxx);
			}
			else Try(i+1);
			cot[j]=0; dcxuoi[i-j+8]=0 ; dcng[i+j-1]=0; sum-=a[i][j];
		}
	}
}
int main(){
	int t; cin>>t;
	for(int i=1;i<=t;i++){
		
		maxx=-1e9;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin>>a[i][j];
			}
		}
		Try(1);
		cout<<"Test "<<i<<": "<<maxx<<endl;
	}	
}