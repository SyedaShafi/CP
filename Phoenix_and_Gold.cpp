#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n;
        cin>>x;
        int a[n], i, sum=0, temp, flag = 0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++){
            sum+=a[i];
            if(sum != x){
                flag++;
            }
            else if(i<n-1){
                sum -= a[i];
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                i--;
            }
        }

        if(flag != n) cout<<"NO\n";

        else{
             cout<<"YES\n";

            for(i=0; i<n; i++) cout<<a[i]<<" ";

            cout<<"\n";

        }
    }
}
