#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int a['z'+1]={0};
		for(char x:s) a[x]++;
		int x=*max_element(a,a+'z');
		if(x-1<=s.size()-x) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}