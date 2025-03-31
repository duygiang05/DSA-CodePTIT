#include<bits/stdc++.h>
using namespace std;
char c;
int a[100], n,used[10];
vector<char> v;
bool nguyenam(char x){
	if(x=='A' || x=='E') return true;
	return false;
}
void in(){
	if(n==4){
		if(a[1]==1 || a[n]==1){
			for(int i=1;i<=n;i++){
				cout<<v[a[i]-1];
			}
			cout<<endl;
		}
	}
	else {
		if((a[1]==1&&a[2]==5)|| (a[1]==5&&a[2]==1)||(a[n-1]==1&&a[n]==5)||(a[n-1]==5&&a[n]==1)||(a[1]==1&&a[n]==5)||a[n]==1&&a[1]==5){
			for(int i=1;i<=n;i++)	cout<<v[a[i]-1];
			cout<<endl;
		}
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=1;
			if(i==n) in();
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	cin>>c;
	for(char x='A';x<=c;x++) v.push_back(x);
	n=v.size();
	cout<<endl;
	Try(1);
}