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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int g, f = 0, temp;
        if (n % 2 == 0)
            temp = n / 2;
        else
            temp = n / 2 + 1;
        for (int i = 0; i < temp; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                g = __gcd(a[i], a[j]);
                if (g >= 2)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }
        for (int i = temp + 1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                g = __gcd(a[i], a[j]);
                if (g >= 2)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }
        if (f == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}