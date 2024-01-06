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
        int n, k;
        cin >> n >> k;
        int flag = 0, ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele == 1)
                flag = 1;
        }
        if (flag == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}