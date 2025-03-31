#include<bits/stdc++.h> 

using namespace std;

int a[100],n;
bool used[100]; 
string s;
char c;

bool check(char c){
	return (c!='A' && c!= 'E');
}
void in(){
	for(int i=0;i<s.size();i++){
		if(s[i]=='A' || s[i]=='E'){
			if(i>0 && i<s.size()-1 && check(s[i-1] ) && check(s[i+1])) return ;
		}
	}
	cout<<s<<endl;
}

void Try(char i){
	for(int j='A' ;j<= c ;j++){
		if(!used[j]){
			s+=j;
			used[j]=true;
			if(s.size()== c-64) in();
			else Try(i+1);
			used[j]=false;
			s.pop_back();
		}
	}
}
int main(){
	cin>>c; Try('A');
}