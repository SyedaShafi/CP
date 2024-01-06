#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num, rem=0, ans=0;
        cin>>num;
        while(num != 0){
            rem = num%10;
            ans = ans*10+rem;
            num = num/10;
        }
        cout<<ans<<endl;
    }
}