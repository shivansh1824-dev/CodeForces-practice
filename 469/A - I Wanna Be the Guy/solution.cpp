#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> mp;
    int n;
    cin >> n;
    int p;
    cin >> p;
    int x;
    for (int i = 0; i < p; i++) {
        cin >> x;
        mp[x]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        mp[x]++;
    }
    for (int i = 1; i <= n; i++) {
        if (mp[i] == 0) {
            cout << "Oh, my keyboard!" << '
';
            return 0;
        }
    }
    cout << "I become the guy." << '
';
    return 0;
}