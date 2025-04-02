#include<bits/stdc++.h>
using namespace std;

queue<int> q;

void result(string s)
{
	if(s == "PUSH") 
	{
		int x; cin>>x; q.push(x);
	}
	if(s == "PRINTFRONT") 
	{
		if(q.empty()) cout<<"NONE\n";
		else cout<<q.front()<<endl;
	}
	if(s == "POP") 
	{
		if(!q.empty()) q.pop();
	}
}

void test()
{
	int n; cin>>n;
	while(n--)
	{
		string s; cin>>s;
		result(s);
	}
}

int main()
{
	// freopen("C:/sublime text/input.txt","r",stdin);
	// freopen("C:/sublime text/output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	test();
}