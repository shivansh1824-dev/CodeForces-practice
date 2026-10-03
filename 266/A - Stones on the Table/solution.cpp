#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    int removeCount=0;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                removeCount++;
            }
        }
    }
    cout << removeCount << endl;
    return 0;
}