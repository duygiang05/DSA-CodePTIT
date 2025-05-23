#include<bits/stdc++.h>
using namespace std;

#define in size_t
bool cmp(pair<int,int> a, pair<int,int> b) {
	return a.second<b.second;
}
void test()
{
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<pair<int,int>> v(n);
		for(auto &it:v) cin>>it.first;
		for(auto &it:v) cin>>it.second;
		sort(begin(v),end(v),cmp);
		int dem=1,kt=v[0].second;
		for(int i=1;i<n;i++) {
			if(v[i].first >= kt) {
				dem++; kt=v[i].second;
			}
		}
		cout<<dem<<'\n';	
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
