#include<bits/stdc++.h>
using namespace std;

void test()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		stack<char> st;
		int res=0;
		for(char x : s)
		{
			if(x == '(') st.push(x);
			else 
			{
				if(!st.empty()) 
				{
					res+=2; st.pop();
				}
			}
		}	
		cout<<res<<endl;
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