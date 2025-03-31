#include<bits/stdc++.h>
using namespace std;

int n; 
string s;
bool used[256];


void Try(int i,string x){
	for(int j=i;j<n;j++){
		if(!used[s[j]]){
			x+=s[j]; used[s[j]]= true;
			cout<<x<<' ';
			Try(j+1,x);
			used[s[j]]=false;
			x.pop_back();
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>s;
		Try(0,"");
		cout<<endl;
	}
}