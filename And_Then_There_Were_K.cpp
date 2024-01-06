#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int num, digit, ans;
        cin>>num;
        digit = (int)(log2(num)+1);
        digit--;
        ans = pow(2,digit) - 1;
        cout<<ans<<"\n";

    }
}
