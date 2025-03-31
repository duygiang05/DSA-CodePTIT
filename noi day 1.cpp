#include<bits/stdc++.h>
using namespace std;  

#define ll long long
ll x ;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		priority_queue<ll,vector<ll>, greater<ll>> noiday;
		for(int i=0;i<n;i++) {
			cin>>x; noiday.push(x);
		}
		ll result=0;
		while(noiday.size()>1){
			ll tmp1 = noiday.top();
			noiday.pop();
			ll tmp2= noiday.top(); noiday.pop();
			ll tmp3= tmp1+tmp2; result+=tmp3; noiday.push(tmp3);
		}
		cout<<result<<endl;
	}
}