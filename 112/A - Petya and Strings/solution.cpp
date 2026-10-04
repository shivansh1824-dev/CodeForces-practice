#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans=0;
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    int l=s1.length();
    for(int i=0;i<l;i++){
        if(s1[i] == s2[i]){
            ans=0;
        }else if(s1[i]<s2[i]){
        ans=-1;
        break;
    }else{
    ans=1;
    break;
}
}
cout << ans << endl;
return 0;
}