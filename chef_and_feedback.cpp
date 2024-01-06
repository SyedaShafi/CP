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
        int i, flag = 0;
        for (i = 0; i + 2 < str.length(); i++)
        {
            if (str.substr(i, 3) == "101" || str.substr(i, 3) == "010")
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }
}