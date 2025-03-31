#include<bits/stdc++.h>
using namespace std;

int lon(int x){
	string s=to_string(x);
	int res=0;
	for(char a:s){
		res=res*10+(a-'0') ;
		if(a=='5' ) res++;
	}
	return res;
}
int nho(int x){
	string s=to_string(x);
	int res=0;
	for(char a:s){
		res=res*10+(a-'0') ;
		if(a=='6' ) res--;
	}
	return res;
}
int main(){
	int a,b; cin>>a>>b;
	cout<<nho(a)+nho(b)<<' '<<lon(a)+lon(b);
}