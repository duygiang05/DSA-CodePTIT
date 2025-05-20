#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define in size_t

const int MOD = 1e9+7;

void f(vector<int> &a,in ind,int s,vector<int> &ans,in n,vector<vector<int>> &anss) {
    if(ind == a.size()) {
        if(s==0 && ans.size() == n) {
            anss.push_back(ans);
        }
        return ;
    }
    if(a[ind] <= s) {
        ans.push_back(a[ind]);
        f(a,ind+1,s-a[ind],ans,n,anss);
        ans.pop_back();
    }
    f(a,ind+1,s,ans,n,anss);
}

bool nto(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) return false;
    }
    return true;
}

vector<int> ntoo(int p,int s) {
    vector<int> ans;
    for(int i=p+1;i<=s;i++) {
        if(nto(i)) ans.push_back(i);
    }
    return ans;
}

void test()
{
    int t; cin>>t;
    while(t--) {
        int n,p,s; cin>>n>>p>>s;
        vector<int> a=ntoo(p,s),ans;
        vector<vector<int>> anss;
        f(a,0,s,ans,n,anss);
        cout<<anss.size()<<'\n';
        for(auto it:anss) {
            for(int i:it) cout<<i<<' ';
            cout<<'\n';
        }cout<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    test();
}