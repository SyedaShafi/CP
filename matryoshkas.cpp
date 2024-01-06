#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
map<int, int> m;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        m.clear();
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }

        sort(a + 1, a + n + 1);
        int cnt = 0, temp;
        for (int i = 1; i <= n; i++)
        {
            if (m[a[i]])
            {
                temp = a[i];
                cnt++;
                while (m[temp])
                {
                    m[temp]--;
                    temp++;
                }
            }
        }

        cout << cnt << "\n";
    }
}