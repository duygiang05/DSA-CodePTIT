#include<bits/stdc++.h>
using namespace std;


queue<int> q;

void result(int x)
{
	if(x == 1) cout<<q.size()<<endl;
	if(x == 2) cout<<(q.empty() ? "YES\n" : "NO\n");
	if(x == 3)
	{
		int y; cin>>y; q.push(y);
	} 
	if(x == 4)
	{
		if(!q.empty()) q.pop();
	}
	if(x == 5) cout<<(q.empty() ? -1 : q.front())<<endl;
	if(x == 6) cout<<(q.empty() ? -1 : q.back())<<endl; 
}

void test()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		while(n--)
		{
			int x ;cin>>x; result(x);
		}
		while(!q.empty()) q.pop();
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