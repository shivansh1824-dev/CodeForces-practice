#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y, r;
        cin >> x >> y >> r;
 
        for (long long p = 0; p <= r; p++) {
 
            long long rem = r * r - p * p;
 
            long long q = sqrt(rem);
 
            if (q * q == rem) {
                cout << x + p << " " << y + q << '
';
                break;
            }
        }
    }
 
    return 0;
}