#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 10;
int a[N];
int bs(int d, int n)
{
    int mid, l = 0, r = n - 1, mn = -1;
    while (l <= r)
    {
        mid = l + ((r - l) / 2);
        if (a[mid] == d)
        {
            mn = mid;
            l = mid + 1;
        }
        else if (a[mid] < d)
        {
            l = mid + 1;
            mn = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return mn;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        int d;
        cin >> d;
        int index = bs(d, n);
        for (int i = index + 1; i < n; i++)
        {
            if (a[i] < d)
                index++;
            else
                break;
        }
        cout << index + 1 << "\n";
    }
}