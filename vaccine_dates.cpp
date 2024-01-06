#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d, l, r;
        cin>>d>>l>>r;
        if(d>=l && d<=r) cout<<"Take second dose now\n";
        else if(d>l && d>r) cout<<"Too Late\n";
        else if(d<l && d<r) cout<<"Too Early\n";
    }
    return 0;
}