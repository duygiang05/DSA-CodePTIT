#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m],c[k];
		for(int &x :a) cin>>x;
		for(int &x :b) cin>>x;
		for(int &x :c) cin>>x;
		int i = j = h =0;
		vector<int> v;
		while(i < n && j < m && h< k){
			if(a[i] == b[j] && b[j] == c[h]) {
				v.push_back(a[i]); i++; j++ ; h++;
				
			}
			else if(a[i] > b[j] && a[i]  > c[h]) i++ ;
			else if(b[j] > a[i] && b[j] > c[h]) j++;
			else if(c[h] > a[i] && c[h] > b[j] ) h++;
		}
	}
}