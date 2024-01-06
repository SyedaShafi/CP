
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
        int a[4];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        int days = 0;
        while (a[0] != 0)
        {
            days++;
            if (a[1] > a[2])
                a[1]--;
            else
                a[2]--;
            a[0]--;
        }
        days += min(a[1], a[2]);

        cout << days << "\n";
    }
}
