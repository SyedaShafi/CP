#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,i,j, sum, certificate=0;
    cin>>n>>m>>k;
    int a[k+1];
    for(i=0; i<n; i++){
        sum=0;
        for(j=0; j<k+1; j++){
            cin>>a[j];
            sum+=a[j];
        }
        sum -= a[k];
        if(sum >= m && a[k]<=10) certificate++;
    }
    cout<<certificate<<endl;
    
}