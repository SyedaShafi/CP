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
        int sz;
        cin >> sz;
        int a[sz+2] = {0};
        int ele, cnt = 0, ans;

        for (int i = 0; i < sz; i++)
        {
            cin >> ele;
            a[ele]++;
        }
        for (int i = 1; i <= sz; i++)
        {
            if (a[i] != 0)
            {
                cnt++;
            }
        }
        if (cnt == 1)
            ans = 1;
        else if (cnt == 2)
            ans = (sz / 2) + 1;
        else
            ans = sz;

        cout << ans << "\n";
    }
}