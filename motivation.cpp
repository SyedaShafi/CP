#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s,r, mx=0;
        cin>>n>>x;
        for(int i =0; i<n; i++){
                cin>>s>>r;
                if (s <= x) {
                    mx = max(mx, r);
                }
        }
        cout<<mx<<endl;
    }
}