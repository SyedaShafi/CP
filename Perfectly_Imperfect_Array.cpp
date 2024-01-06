#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, flag=0, ans;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
        {

            cin>>a[i];
            ans = sqrt(a[i]);
            if(ans*ans != a[i]) flag = 1;
        }

        if(flag == 1) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
