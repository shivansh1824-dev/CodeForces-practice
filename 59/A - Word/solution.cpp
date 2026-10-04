#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int upperCount=0;
    int lowerCount=0;
    int t = 1;
    // cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n=s.length();
        for(int i=0;i<n;i++){
            char x=s[i];
            if(x >= 'A' && x <= 'Z'){
                upperCount++;
            }else{
                lowerCount++;
            }
        }
        if(lowerCount >= upperCount){
            for(int i=0;i<n;i++){
                s[i]=tolower(s[i]);
            }
        }else{
            for(int i=0;i<n;i++){
                s[i]=toupper(s[i]);
            }
        }
        cout << s << endl;
    }
    return 0;
}