#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> &mtk, vector<int>& color, int v, int c, int V) {
    for(int i = 1; i <= V; i++) {
        if(mtk[v][i] && c == color[i]) 
            return false;
    }   
    return true;
}

bool tomau(vector<vector<int>> &mtk, vector<int>& color, int v, int V, int m) {
    if(v > V) return true;
    for(int c = 1; c <= m; c++) {
        if(check(mtk, color, v, c, V)) {
            color[v] = c;
            if(tomau(mtk, color, v + 1, V, m)) 
                return true;
            color[v] = 0;
        }
    }
    return false;
}

void test() {
    int t; cin >> t;
    while(t--) {
        int v, e, m; 
        cin >> v >> e >> m;
        vector<vector<int>> mtk(v + 1, vector<int>(v + 1, 0));
        while(e--) {
            int x, y; 
            cin >> x >> y; 
            mtk[x][y] = mtk[y][x] = 1;
        }
        vector<int> color(v + 1, 0);
        cout << (tomau(mtk, color, 1, v, m) ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    test();
    return 0;
}