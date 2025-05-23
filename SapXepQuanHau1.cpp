#include<bits/stdc++.h>
using namespace std;

#define in size_t

in dem = 0;
void f(in cot,vector<vector<int>> &a,vector<int> &hang_,vector<int> &cheoxuoi,vector<int> &cheonguoc,int n) {
	if(cot == n) {
		// khi dien het cac quan hau, cap nhat dem;
		dem++; return;
	}
	for(int hang=0;hang<n;hang++) {
		// ktra o hop le
		if(a[hang][cot] == 0 && !cheoxuoi[hang+cot] && !cheonguoc[n-1+cot-hang] && !hang_[hang]) {
			// danh dau da chon
			a[hang][cot]=1;
			hang_[hang] =1;
			cheoxuoi[hang+cot]=1;
			cheonguoc[n-1+cot-hang]=1;

			// goi de quy den cot tiep theo
			f(cot+1,a,hang_,cheoxuoi,cheonguoc,n);

			// bo chon o , backtrack;
			a[hang][cot]=0;
			hang_[hang]=0;
			cheoxuoi[hang+cot]=0;
			cheonguoc[n-1+cot-hang]=0;
		}
	}
}

void test()
{
	int t;cin>>t;
	while(t--) {
		dem = 0;
		int n; cin>>n;
		vector<vector<int>> a(n,vector<int>(n,0));
		vector<int> hang(n,0),cheoxuoi(2*n-1,0),cheonguoc(2*n-1,0);
		f(0,a,hang,cheoxuoi,cheonguoc,n);
		cout<<dem<<'\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	test();
}
