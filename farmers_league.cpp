#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, f_place, s_place;
        cin>>n;
        f_place = (n-1) * 3;
        s_place = ((n-1)/2) * 3;

        cout<<(f_place - s_place)<<endl;
    }
}