#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool flag = true, positive = false, negative = false;
        if (a[0] != b[0])
        {
            cout << "NO\n";
            continue;
        }
        else
            for (int i = 0; i < n; i++)
            {
                if (a[i] < b[i] and positive == false)
                {
                    flag = false;
                    break;
                }
                else if (a[i] > b[i] and negative == false)
                {
                    flag = false;
                    break;
                }
                if (a[i] == 1)
                    positive = true;
                if (a[i] == -1)
                    negative = true;
            }

        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}