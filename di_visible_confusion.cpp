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
        bool y = true;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            bool index = false;
            for (int j = i + 1; j >= 2; j--)
            {
                if (x % j)
                {
                    index = true;
                    break;
                }
            }
            y &= index;
        }
        if (y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}