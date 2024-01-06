#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        int a[n], sum=0, ans;
        for(i=0; i<n; i++){
           cin>>a[i];
           sum+=a[i];
        }

        if(sum <= 0 || sum<n)
        cout<<1<<"\n";

        else{
            cout<<sum-n<<"\n";
        }
    }
}
