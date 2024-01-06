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
        if (n == 1)
        {
            cout << a[0] << "\n";
            continue;
        }
        sort(a, a + n);
        vector<int> mn;
        int sum = a[0];
        for (int i = 1; i < n; i++)
        {
            a[i] -= sum;
            mn.push_back(a[i - 1]);
            sum += a[i];
        }
        mn.push_back(a[n - 1]);
        sort(mn.begin(), mn.end());
        cout << mn.back() << "\n";
    }
}