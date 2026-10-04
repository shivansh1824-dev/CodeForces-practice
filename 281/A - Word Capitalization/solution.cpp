#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n=s.length();
        char lastElement;
        reverse(s.begin(),s.end());
        lastElement=s[n-1];
        lastElement=toupper(lastElement);
        s[n-1]=lastElement;
        reverse(s.begin(),s.end());
        cout << s << endl;
    }
 
return 0;
}