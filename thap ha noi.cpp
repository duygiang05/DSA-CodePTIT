#include<bits/stdc++.h>
using namespace std;
int n;
char v[3]={'A','B','C'};
void thaphanoi(int x,int a,int b,int c){
	if(x==1) cout<<v[a-1]<<" -> "<<v[c-1]<<endl;
	else {
		thaphanoi(x-1,a,c,b);
		cout<<v[a-1]<<" -> "<<v[c-1]<<endl;
		thaphanoi(x-1, b, a, c);
	}
}
int main(){
	cin>>n;
	thaphanoi(n,1,2,3);
}