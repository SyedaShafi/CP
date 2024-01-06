#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y,time=0,i;
        cin>>n>>p>>x>>y;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];

        for(i=0; i<p; i++){
            if(a[i] == 0) time+=x;
            else time+=y;
        }

        cout<<time<<endl;
        
    }
}