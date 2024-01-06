#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s1, s2, s3, s4, flag = 1 ;
        cin>>s1>>s2>>s3>>s4;
        int a[4] = {s1,s2,s3,s4};

        sort(a, a+4);

        if((s1==a[2] && s2 == a[3]) || (s1==a[3] && s2==a[2])) flag = 0;
        else if((s3==a[2] && s4 == a[3]) || (s3==a[3] && s4==a[2])) flag = 0;

        if(flag == 1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
