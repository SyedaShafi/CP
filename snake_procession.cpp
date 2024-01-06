#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, i, flag = 0;
        cin >> l;
        string str, store;
        cin >> str;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == 'H' || str[i] == 'T')
                store = store + str[i];
        }

        // cout << store << endl;
        if (store.length() % 2 == 0)
        {

            for (i = 0; i < store.length(); i += 2)
            {
                if (store[i] == 'H' && store[i + 1] == 'T')
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1 || store.length() == 0)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }
}