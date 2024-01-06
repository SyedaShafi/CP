#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, cnt = 0;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            if (n - sum < i)
                break;

            sum += i;
            cnt++;
        }
        cout << cnt << endl;

    }
}