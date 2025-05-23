#include<bits/stdc++.h>
using namespace std;

#define in size_t
int so6(string &a,string &b) {
	for(char &i:a) 
		if(i=='5') i='6';
	for(char &i:b) 
		if(i=='5') i='6';
	return stoi(a) + stoi(b);
}
int so5(string &a,string &b) {
	for(char &i:a) 
		if(i=='6') i='5';
	for(char &i:b) 
		if(i=='6') i='5';
	return stoi(a) + stoi(b);
}
void test()
{
	string a,b; cin>>a>>b;
	cout<<so5(a,b)<<' '<<so6(a,b);
}		

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
