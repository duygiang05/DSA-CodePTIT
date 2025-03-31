#include<bits/stdc++.h>
using namespace std;
int a[100];
vector<string> v;
void in(){
	string s="/02/2";
	if(!(a[1]==0 && a[2]==0)){
		for(int i=1;i<=5;i++){
			if(i<3){
				if(a[i]) s="2"+s;
				else s="0"+s;
			}
			else {
				if(a[i]) s+="2";
				else s+="0";
			}
		}
		v.push_back(s);
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==5) in();
		else Try(i+1);
	}
}
int main(){
	Try(1);
	sort(begin(v),end(v));
	for(string x:v) cout<<x<<endl;
}