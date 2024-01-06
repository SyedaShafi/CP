#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long int r, b, d,mn,mx;
        cin>>r;
        cin>>b;
        cin>>d;

        mn = min(r,b);
        mx = max(r,b);

        if((mn*(d+1)) >= mx)
        {

            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
