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

        vector<int> v;
        vector<int> nv;
        int mn = INT_MAX, f = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 0)
                nv.push_back(a[i]);
            else if (a[i] > 0)
                v.push_back(a[i]);
        }
        if (nv.size() > 1)
            sort(nv.begin(), nv.end());
        for (int i = 1; i < nv.size(); i++)
        {
            int temp = abs(nv[i - 1] - nv[i]);
            mn = min(mn, temp);
        }

        if (v.size() > 1)
            sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            if (mn >= v[i])
                f = 1;
        }

        if (f == 1)
            cout << nv.size() + 1 << "\n";
        else
            cout << nv.size() << "\n";
    }
}