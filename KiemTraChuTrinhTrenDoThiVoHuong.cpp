#include <bits/stdc++.h>
using namespace std;

bool chutrinh(vector<vector<int>> &dsk, int u, vector<int> &used) {
    queue<pair<int, int>> q;
    q.push({u, -1});
    used[u] = true;

    while (!q.empty()) {
        auto x = q.front(); q.pop();
        int v = x.first;
        int parent = x.second;

        for (int i : dsk[v]) {
            if (!used[i]) {
                used[i] = true;
                q.push({i, v});
            }
            else if (i != parent) {
                // Gặp lại đỉnh đã thăm mà không phải cha => có chu trình
                return true;
            }
        }
    }
    return false;
}

bool check(vector<vector<int>> &dsk, int v) {
    vector<int> used(v + 1, 0);
    for (int i = 1; i <= v; i++) {
        if (!used[i]) {
            if (chutrinh(dsk, i, used)) return true;
        }
    }
    return false;
}

void test() {
    int t;
    cin >> t;
    while (t--) {
        int v, e, x, y;
        cin >> v >> e;
        vector<vector<int>> dsk(v + 1);
        while (e--) {
            cin >> x >> y;
            dsk[x].push_back(y);
            dsk[y].push_back(x); // Đồ thị vô hướng
        }
        if (check(dsk, v)) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    test();
}
