#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
	int n ;cin>>n;
	int a[n]; 
	for(int &x:a) cin>>x;
	sort(a,a+n);
	int tmp1 = a[n-1] * a[n-2];
	int tmp2 = a[n-1] * a[n-2] * a[n-3];
	int tmp3 = a[0] * a[1] * a[n-1];
	cout<<max(tmp1,max(tmp2,tmp3))<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}