#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector <pair<int,int>> v(n);
		for(pair<int,int> &x:v) cin>>x.first;
		for(pair<int,int> &x:v) cin>>x.second;
		sort(begin(v),end(v),cmp);
		int dem=1;
		int tmp=v[0].second;
		for(int i=1;i<n;i++){
			if(v[i].first>=tmp){
				dem++;
				tmp=v[i].second;
			}
		}
		cout<<dem<<endl;
	}
}