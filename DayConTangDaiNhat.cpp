// day con tang dai nhat : 0(nlogn) 
// phù hợp với n lớn (>10^5);
// sử dụng binary search

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void test()
{
	int n; cin>>n;
	vector<int> a(n); 
	for(int &i:a) cin>>i;
	vector<int> v; v.push_back(a[0]);
	for(int i=1;i<n;i++) {
		if(a[i] > v.back()) v.push_back(a[i]);
		else {
			auto ind = lower_bound(begin(v), end(v),a[i]);
			v[ind-v.begin()] = a[i];
		}
	}
	cout<<v.size();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}