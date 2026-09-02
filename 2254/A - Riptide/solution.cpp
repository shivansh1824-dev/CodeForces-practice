#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || b==c || c==a){
            cout<<0<<endl;
            continue;
        }
        int x=min({a,b,c});
        int z=max({a,b,c});
        int y=a+b+c-x-z;
        cout<<min(y-x,z-y)<<endl;
    }
    return 0;
}