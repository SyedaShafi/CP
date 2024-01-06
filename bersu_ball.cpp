#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
            for (int j = 0; j < m; j++)
            {

                if (b[j] != -1)
                    if (a[i] == b[j] || abs(a[i] - b[j]) == 1)
                    {
                        cnt++;
                        a[i] = -1;
                        b[j] = -1;
                        break;
                    }
            }
    }
    cout << cnt << "\n";
}