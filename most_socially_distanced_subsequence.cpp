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
        v.push_back(a[0]);
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                v.push_back(a[i]);
            else if (a[i] < a[i - 1] && a[i] < a[i + 1])
                v.push_back(a[i]);
        }
        v.push_back(a[n - 1]);
        cout << v.size() << "\n";
        for (auto ele : v)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}