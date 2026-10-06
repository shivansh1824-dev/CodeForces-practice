#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin >> y;
    while (true) {
        y++;
        string s = to_string(y);
        set<char> st(s.begin(), s.end());
        if (st.size() == 4) {
            cout << y << '
';
            break;
        }
    }
    return 0;
}