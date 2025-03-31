#include<bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100] , dem =0; 


void Try(int i,int index, int result){
	for(int j=index;j<=n;j++){
		result += a[j]; dem++;
		x[i]=a[j];
		if(result == s ) {
			return ;
		}
		else {
			Try(i+1,j+1, result);
		}
		result-=a[j]; dem--;
	}
} 

int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,greater<int>());
	for(int i=1;i<=n;i++) cout<<a[i]<<' ';
	cout<<endl;
	Try(1,1,0);
	if(!dem) cout<<-1;
	else cout<<dem;
	
}