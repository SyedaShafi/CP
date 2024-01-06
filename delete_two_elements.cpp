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
        int ele;
        map<int, int> mp;
        ll sum = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            a[i] = ele;
            sum += ele;
            mp[ele]++;
        }
        if ((2 * sum) % n != 0)
        {
            cout << "0\n";
            continue;
        }
        ll pairs = 0;
        for (int i = 0; i < n; i++)
        {
            ll b = ((2 * sum) / n) - a[i];
            mp[a[i]]--;
            pairs += mp[b];
        }
        cout << pairs << "\n";
    }
}