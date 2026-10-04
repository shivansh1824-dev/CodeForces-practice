#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x != i + 1) {
                v.push_back(x);
            }
        }

        bool ok = true;

        for (int i = 1; i < v.size(); i++) {
            if (v[i - 1] < v[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}