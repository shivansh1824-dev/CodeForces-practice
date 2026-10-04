#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    int lowerCount=0;
    while (t--) {
        string s;
        cin >> s;
        int n=s.length();
        vector<int> LCase(26,0);
        for(int i=0;i<n;i++){
            LCase[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(LCase[i]!=0){
                lowerCount++;
            }
        }
    }
    if((lowerCount)%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}