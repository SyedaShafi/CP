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
        int ans = 0, ele, a[n], flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            ans = 0;
            ele = a[i];
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    ans = ans ^ a[j];
            }
            // cout << "ans " << ans << " ele " << ele << endl;
            if (ans == ele)
            {
                break;
            }
        }
        cout << ans << "\n";
    }
}