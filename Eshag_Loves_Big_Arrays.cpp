#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], i, sum=0, avg, count=0;

        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);

        for(i=n-1; i>0; i--)
        {
            avg = (a[0] + a[i])/2;

            if(avg< a[i]) count++;
        }

        cout<<count<<"\n";

    }
}
