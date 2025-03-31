#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
vector<char> v;
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<v[a[i]-1];
	}
	cout<<endl;
}
void Try(int i){
	for(int j=a[i-1];j<=n;j++){
		a[i]=j;
		if(i==k ) in();
		else Try(i+1);
	}
}
int main(){
	a[0]=1;
	char c; 
	cin>>c>>k;
	for(char x='A';x<=c;x++){
		v.push_back(x);
	}
	n=v.size();
	Try(1);
}