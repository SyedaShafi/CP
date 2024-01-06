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
        int ele, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele == 1)
                cnt++;
        }
        cout << n - cnt/2 << "\n";
    }
}