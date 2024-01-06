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
        int n, k;
        cin >> n >> k;
        int r = n, l = 1, cnt = 0;

        while (l < r)
        {
            cnt = 0;
            while ((l < r) and (cnt != k - 1))
            {
                cout << r << " ";
                r--;
                cnt++;
            }
            cout << l << " ";
            l++;
        }
        if (l == r)
            cout << l << " ";

        cout << "\n";
    }
}