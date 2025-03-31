#include<bits/stdc++.h>
using namespace std;  

#define ll long long

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second < b.second;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<pair<int,int> > v(n);
		for(pair<int,int> &x:v) {
			cin>>x.first>>x.second;
		}
		sort(begin(v),end(v),cmp);
		int dem=0;
		int tmp=-1;
		for(int i=0;i<n;i++){
			if(v[i].first>= tmp){
				dem++; tmp=v[i].second;
			}
		}
		cout<<dem<<endl;
	}
}