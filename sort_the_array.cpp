#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());

    int l = 0, r = 0, f = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            l = i;
            for (int j = i ; j < n - 1; j++)
            {
                f = 1;
                if (a[j] < a[j + 1])
                {
                    r = j;
                    break;
                }
            }
        }
        if (f == 1)
        {
            if (r == 0)
                r = n - 1;
            break;
        }
    }
    // cout << l << " " << r << "\n";

    sort(a + l, a + r + 1);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != v[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "yes\n"
             << l + 1 << " " << r + 1 << "\n";
    else
        cout << "no\n";
}