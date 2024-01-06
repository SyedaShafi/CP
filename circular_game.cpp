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
        ll a[n + 3];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n % 2 != 0)
            cout << "Mike\n";
        else
        {
            int min = *(min_element(a, a + n));
            int index = find(a, a + n, min) - a;
            // cout << "Index " << index;
            if (index % 2 != 0)
                cout << "Mike\n";
            else
                cout << "Joe\n";
        }
    }
}