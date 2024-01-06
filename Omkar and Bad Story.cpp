#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i, flag=0, mx;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++){
            cin >>a[i];
            if(a[i]<0){
                flag = -1;
            }
        }

        if(flag == 0){
            sort(a, a+n);
            cout<<"YES\n";
            cout<<a[n-1]+1<<"\n";
            for(i=0; i<a[n-1]+1; i++){
                cout<<i<< " ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}
