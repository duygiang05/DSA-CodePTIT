#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void f(vector<int> &a,int ind,vector<int> &ans,int sum,vector<vector<int>> &anss) {
	if(ind == a.size()) {
		if(sum == 0) {
			anss.push_back(ans);
		}
		return ;
	}
	if(a[ind] <= sum) {
		ans.push_back(a[ind]);
		f(a,ind,ans,sum-a[ind],anss);
		ans.pop_back();
	}
	f(a,ind+1,ans,sum,anss);
}

void test()
{
	int t; cin >> t;
	while(t--) {
		int n,s; cin >> n >> s;
		vector<int> a(n);
		for(int &i : a) cin >> i;
		sort(begin(a),end(a));
		vector<int> ans;
		vector<vector<int>> anss;
		f(a,0,ans,s,anss);
		if(!anss.size()) cout << -1;
		else {
			cout << anss.size();
			for(auto it : anss) {
				cout << " {";
				for(int i=0;i<it.size() ;i++) {
					cout << it[i]; if(i<it.size()-1) cout << ' ';
				}
				cout << "}";
			}
		}
		cout << '\n';
 	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}