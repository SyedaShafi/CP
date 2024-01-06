#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,a,i, digit = 0, sum = 0;
        cin>>n;
        string s, s1;
        s.reserve(n);
        cin>>s;
        for (i=0; i<n; i++)
        {
            s1 = s[i];
            a = stoi(s1);
            if(a>0) digit++;
            sum += stoi(s1);

            if(i==n-1 && a > 0) digit--;

        }

        cout<<sum+digit<<"\n";
    }
}
