#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,temp=0,t=0;
        cin>>n>>m>>k;
        int a[n],i;
        for(i=0; i<n; i++) {
            cin>>a[i];
            if(a[i] == 1) temp++;
        }
       
        if(temp == n) cout<<100<<endl;
        else if(temp<n) {
            for(i=0; i<m; i++){
                if(a[i] == 1) t++;
            }
            if(t==m) cout<<k<<endl;
            else cout<<0<<endl;
        }

    }
    
}