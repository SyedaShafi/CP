#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--){

        long long int n, x, t, a, dis, ans=0;
        cin>>n>>x>>t;
        a = t/x;
        if(x==t){
            cout<<n-1<<endl;
        }
        else if(x>t)
        {
            cout<<0<<endl;
        }

        else if(a>=n){
            cout<<(n*(n-1))/2<<endl;
        }
        else if(a<n){
            dis = n-a;
            ans+=dis*a;
            ans += (a*(a-1))/2;
            cout<<ans<<endl;
        }

    }
}
