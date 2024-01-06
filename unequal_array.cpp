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
        int first = -1, last = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                first = i + 1;
                break;
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] == a[i - 1] and i - 1 >= first)
            {
                last = i - 1;
                break;
            }
        }
        // cout << first << " " << last << "\n";
        if (first == -1 || last == -1)
            cout << 0 << "\n";
        else if (first == last)
            cout << 1 << "\n";
        else
            cout << last - first << "\n";
    }
}