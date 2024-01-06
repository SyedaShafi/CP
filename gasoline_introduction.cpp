#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,a[n], ans;
        for(i=0; i<n; i++){
            cin>>a[i];
        }

        ans=a[0];
        for(i=1; i<n; i++){
            if(ans==0) break;
            ans = ans-1+a[i];
        }

        if(ans == 0) cout<<i - 1<<endl;
        else cout<<ans + i -1 <<endl;

    }
}