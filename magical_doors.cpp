#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int cnt = 0;
        for (int i = 0; i < str.length() - 1; i++)
        {
            if ((str[i] == '0' && str[i + 1] == '1') || str[i] == '1' && str[i + 1] == '0')
            {
                cnt++;
            }
        }

        if(str[0] == '0') cout<<cnt+1<<endl;
        else cout<<cnt<<endl;
    }
}