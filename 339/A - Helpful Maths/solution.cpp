#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    int oneCount=0;
    int twoCount=0;
    int threeCount=0;
    string ans="";
    while (t--) {
        string s;
        cin >> s;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1'){
                oneCount++;
            }else if(s[i] == '2'){
            twoCount++;
        }else if(s[i] == '3'){
        threeCount++;
    }
}
while(oneCount>0){
    ans.push_back('1');
    ans.push_back('+');
    oneCount--;
}
while(twoCount>0){
    ans.push_back('2');
    ans.push_back('+');
    twoCount--;
}
while(threeCount>0){
    ans.push_back('3');
    ans.push_back('+');
    threeCount--;
}
ans.pop_back();
}
cout << ans << endl;
return 0;
}