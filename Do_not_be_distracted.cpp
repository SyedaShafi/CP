#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        s.reserve(n);
        cin>>s;
        int flag=0, i, j, k;

        for (i=0; i<s.size(); i++)
        {

            j=i+1;
            if(s[i]!=s[j])
            {

                for(k=j; k<s.size(); k++)
                {

                    if(s[k] == s[i]) flag=-1;
                }
            }
        }

        if(flag == -1){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}
