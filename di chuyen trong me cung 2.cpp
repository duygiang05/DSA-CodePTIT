#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
string s="";
int dem=0;
vector<string > v;
void Try(int i,int j){
	if(i==n && j== n) v.push_back(s);
	if(i+1 <= n && a[i+1][j]==1 ){
		s+="D";
		a[i+1][j]=0;
		Try(i+1,j);
		s.pop_back();
		a[i+1][j]=1;	
	}
	if(j-1 <= n && j-1 >=1 && a[i][j-1]==1 ){
		s+="L";
		a[i][j-1]=0;
		Try(i,j-1);
		s.pop_back();
		a[i][j-1]=1;	
	}
	if(j+1 <= n && a[i][j+1]==1 ){
		s+="R";
		a[i][j+1]=0;
		Try(i,j+1);
		s.pop_back();
		a[i][j+1]=1;	
	}
	if(i-1 <= n && i-1 >=1 && a[i-1][j]==1 ){
		s+="U";
		a[i-1][j]=0;
		Try(i-1,j);
		s.pop_back();
		a[i-1][j]=1;	
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		v.clear();
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		if(a[1][1]==0 ) cout<<-1;
		else {
			a[1][1]=0;
			Try(1,1);
			if(v.empty()) cout<<-1;
			else {
				sort(begin(v),end(v)) ;
				for(string x:v) cout<<x<<' ';
			}
		}
		cout<<endl;
	}
}