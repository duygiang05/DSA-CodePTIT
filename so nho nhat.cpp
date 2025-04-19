#include <bits/stdc++.h>
using namespace std;

void test() {
    int t; cin >> t;
    while (t--) {
        int s, d; cin >> s >> d;

        if ((s == 0 && d > 1) || s > 9 * d) {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < d; i++) {
            int min_digit = max((i == 0 ? 1 : 0), s - 9 * (d - i - 1));
            cout<<min_digit;
            s -= min_digit;
        }
        cout<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    test();
}
