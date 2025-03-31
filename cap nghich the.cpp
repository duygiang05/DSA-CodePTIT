#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll merge(ll a[],int l,int m ,int r){
    ll dem=0;
    vector<ll> v1,v2;
    for(int i=l;i<=m;i++){
        v1.push_back(a[i]);
    }
    for(int i=m+1;i<=r;i++){
        v2.push_back(a[i]);
    }
    int i=0,j=0;
    while(i<v1.size()&&j<v2.size()){
        if(v1[i]<=v2[j]){
            a[l]=v1[i]; l++ ;i++;
        }
        else {
            dem+=v1.size()-i;
            a[l]=v2[j]; l++;j++;
        }
    }
    while(i<v1.size() ) {
        a[l]=v1[i];l++;i++;
    }
    while(j<v2.size()){
        a[l]=v2[j]; l++;j++;
    }
    return dem;
}

ll mergesort(ll a[],int l,int r){
    ll dem=0;
    if(l<r){
        int m=(l+r)/2;
        dem+=mergesort(a,l,m);
        dem+=mergesort(a,m+1,r);
        dem+=merge(a,l,m,r);
    }
    return dem;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n ; cin>>n;
        ll a[n];
        for(ll &x:a) cin>>x;
        cout<<mergesort(a,0,n-1)<<endl;
    }
}