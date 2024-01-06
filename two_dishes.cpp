#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if((a+c <= b) && (a+c >= n)) cout<<"YES\n";
        else if(b>=n && (a+c >= b)) cout<<"YES\n";
        else cout<<"NO\n";
    }

}