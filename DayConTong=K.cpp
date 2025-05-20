#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

void f(size_t ind,int k,vector<int> &a,vector<int> &ans,bool &check) {
	if(ind == a.size()) {
		if(k == 0) {
			cout<<'[';
			for(size_t x=0;x<ans.size();x++) {
				cout<<ans[x]; if(x<ans.size() -1) cout<<' ';
			}
			cout<<"] "; check = true; 
		}
		return ;
	}
	if(a[ind] <= k) {
		ans.push_back(a[ind]);
		f(ind+1,k-a[ind],a,ans,check);
		ans.pop_back();
	}
	f(ind+1,k,a,ans,check);
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
		bool check = false;
		f(0,k,a,ans,check);
		if(!check) cout<<-1;
		cout<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
