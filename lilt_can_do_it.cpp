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
        int n, ele;
        cin >> n;
        vector<int> a;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            a.push_back(ele);
        }
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] % 2 == 0 and a[i + 1] % 2 != 0)
                flag = true;
            else if (a[i] % 2 != 0 and a[i + 1] % 2 == 0)
                flag = true;
        }
        if (!flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}