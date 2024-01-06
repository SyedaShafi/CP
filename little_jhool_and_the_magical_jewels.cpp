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
        int a[4] = {0}, i;
        for (i = 0; i < str.size(); i++)
        {
            if (str[i] == 'r')
                a[0]++;
            if (str[i] == 'u')
                a[1]++;
            if (str[i] == 'b')
                a[2]++;
            if (str[i] == 'y')
                a[3]++;
        }

        cout << *min_element(a, a + 4) << endl;
    }
}