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
        bool b[1030] = {false};
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]] = true;
        }
        bool f = false;
        int k = -1;
        for (int i = 1; i < 1024; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int value = a[j] ^ i;
                if (b[value] == false)
                {
                    f = true;
                    break;
                }
            }
            if (f == false)
            {
                k = i;
                break;
            }
            f = false;
        }
        cout << k << "\n";
    }
}