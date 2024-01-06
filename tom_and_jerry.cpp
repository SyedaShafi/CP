#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int diff = abs(a-c) + abs(b-d);
        
        if(diff == k) cout<<"YES\n";
        else if(diff > k) cout<<"NO\n";
        else if(diff < k){
            if(diff%2 == k%2) cout<<"YES\n";
            else if(diff%2 != k%2) cout<<"NO\n";
        }
    }
}