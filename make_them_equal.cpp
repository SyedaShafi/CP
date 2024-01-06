#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n], i;
        for(i=0;i<n;i++) cin>>a[i];

        int max = a[0];
        int min = a[0];

        for(i=0; i<n; i++){
            if(max < a[i]) max=a[i];
            if(min>a[i]) min=a[i];
        }

        int diff = max-min;
        cout<<diff<<endl;
    }
}