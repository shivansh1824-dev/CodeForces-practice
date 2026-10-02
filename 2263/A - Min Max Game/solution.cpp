#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int zeroCount=0;
    int oneCount=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            zeroCount++;
        }else{
            oneCount++;
        }
    }
    if(oneCount>=zeroCount){
        cout<<"Bessie"<<endl;
    }else{
        cout<<"Elsie"<<endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}