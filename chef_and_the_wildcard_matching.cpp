#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int flag = 1;
        for (int i = 0; i < str1.length(); i++)
        {
            if ((str1[i] >= 'a' && str1[i] <= 'z') && (str2[i] >= 'a' && str2[i] <= 'z'))
            {
                if (str1[i] != str2[i])
                    flag = 0;
            }
        }

        if (flag == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}