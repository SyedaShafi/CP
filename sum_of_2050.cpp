#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>> n;
        int count=0;

        while(n>=2050){
            count++;
            x=2050;
            while(x<=n){
                x*=10;
            }
            x/=10;
            n=n-x;
        }

        if(n!=0) cout<<-1<<"\n";
        else cout<<count<<"\n";

    }

}

