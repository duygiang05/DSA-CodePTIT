#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
string s="";
vector<string> v;
void Try(int i,int j){
    if(i==n-1 && j==n-1){
        v.push_back(s);
    } 
    if(i+1<n &&a[i+1][j]==1){
        s+="D"; 
        a[i+1][j]=0;
        Try(i+1,j);
        s.pop_back();
        a[i+1][j]=1;
    }
    if(j+1<n&& a[i][j+1]==1){
        s+="R"; 
        a[i][j+1]=0;
        Try(i,j+1);
        s.pop_back();
        a[i][j+1]=1;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        v.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        Try(0,0);
        if(a[0][0]==0||v.empty()) cout<<-1;
        else {
        	for(string ss:v) cout<<ss<<' ';
		}
        cout<<endl;
    }
}