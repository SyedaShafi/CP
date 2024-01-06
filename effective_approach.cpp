#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    map<int, int> p;
    int ele;
    bool is_present[n + 2] = {false};
    for (int i = 1; i <= n; i++)
    {
        cin >> ele;
        p[ele] = i;
        is_present[ele] = true;
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    ll begin = 0, end = 0;
    for (int i = 0; i < m; i++)
    {
        if (is_present[b[i]])
        {
            begin += p[b[i]];
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (is_present[b[i]])
        {
            end += (n - p[b[i]] + 1);
        }
    }

    cout << begin << " " << end << "\n";
}