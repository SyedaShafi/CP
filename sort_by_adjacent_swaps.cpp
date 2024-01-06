#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> v;
    bool f = 1;
    while (f != 0)
    {
        f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                f = 1;
                swap(a[i], a[i + 1]);
                v.push_back(i);
            }
        }
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
