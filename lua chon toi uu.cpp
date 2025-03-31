#include<bits/stdc++.h>
using namespace std;

bool cmp( pair<int,int> p1, pair<int,int> p2 ){
	return p1.second < p2.second;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<pair<int,int>> v(n);
		int dem=0, tmp=-1;
		for(pair<int,int> &p : v) cin>>p.first>>p.second;
		sort(begin(v),end(v),cmp);
		for(int i=0;i<n;i++){
			if(v[i].first >= tmp ){
				tmp=v[i].second; dem++;
			}
		}
		cout<<dem<<endl;
	} 
}