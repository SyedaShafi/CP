#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int u,v,a,s,v2,v1;
        cin>>u>>v>>a>>s;
        v1 = v*v;
        v2 = (u * u) - (2 * a * s);
        if(v2 <= v1 ) cout<<"YES\n" ;
        else cout<<"NO\n";

    }
   
}