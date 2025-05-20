#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void f(size_t ind,int k,vector<int> &a,vector<int> &ans,vector<vector<int>> &anss) {
	if(ind == a.size()) {
		if(k == 0) {
			anss.push_back(ans);
		}
		return ;
	}
	if(a[ind] <= k) {
		ans.push_back(a[ind]);
		f(ind+1,k-a[ind],a,ans,anss);
		ans.pop_back();
	}
	f(ind+1,k,a,ans,anss);
}
void test()
{
	int t; cin>>t;
	while(t--) {
		int n,k; cin>>n>>k;
		vector<int> a(n);
		for(int &i:a) cin>>i;
		sort(begin(a),end(a));
		vector<int> ans;
		vector<vector<int>> anss;
		f(0,k,a,ans,anss);
		if(!anss.size()) cout<<-1;
		else {
			for(auto it : anss) {
				cout<<'[';
				for(size_t x=0;x<it.size();x++) {
					cout<<it[x];if(x<it.size()-1) cout<<' ';
				}
				cout<<"] ";
			}
		}
		cout<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
