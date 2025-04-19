#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
	int t; cin>>t;
	while(t--)
	{
		int n,m,k; cin>>n>>m>>k;
		int a[n],b[m],c[k];
		for(int &x : a) cin>>x;
		for(int &x :b) cin>>x;
		for(int &x:c) cin>>x;
		int i=0,j=0,h=0; bool check = false;
		while(i<n && j<m && h<k	)
		{
			if(a[i] == b[j] && b[j] == c[h] ) 
			{
				cout<<a[i]<<' ';i++;h++;j++; check = true;
			}
			else if(a[i] < b[j] || a[i] < c[h]) i++;
			else if(b[j] < a[i] || b[j] < c[h] ) j++;
			else if(c[h] < a[i] || c[h] < b[j] ) h++;
		}
		if(!check) cout<<"NO";
 		cout<<endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}