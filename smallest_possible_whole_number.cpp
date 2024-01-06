#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, k, r;
        cin>>n>>k;

        if(n < k || k == 0) cout<<n<<endl;

        else
        { 
            r = n % k;
            cout<< r <<endl;
        }
    }
}