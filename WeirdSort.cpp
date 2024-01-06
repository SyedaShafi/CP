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
        int n, m;
        cin >> n >> m;
        bool is_present[n + 7] = {false};
        int a[n + 3], ele;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
        {
            cin >> ele;
            is_present[ele - 1] = true;
        }
        int len = 0;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (is_present[i] == false)
                continue;
            len = i;
            while (len < n and is_present[len])
                len++;
            sort(a + i, a + len + 1);
            i = len;
        }
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] > a[i + 1])
                ok = false;
        }

        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
}