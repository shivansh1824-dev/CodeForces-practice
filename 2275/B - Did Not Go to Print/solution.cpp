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
 
        string s;
        cin >> s;
 
        stack<int> box;
        vector<bool> done(n + 1, false);
 
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '1') {
                box.push(i);
            }
            else if (s[i - 1] == '2') {
                if (!box.empty()) {
                    done[box.top()] = true;
                    box.pop();
                }
                else {
                    done[i] = true;
                }
            }
            else {
                done[i] = true;
            }
        }
 
        vector<int> ans;
 
        for (int i = 1; i <= n; i++) {
            if (!done[i]) {
                ans.push_back(i);
            }
        }
 
        cout << ans.size() << '
';
 
        for (int x : ans) {
            cout << x << ' ';
        }
 
        cout << '
';
    }
 
    return 0;
}