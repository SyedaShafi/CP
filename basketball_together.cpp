#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int total = n, remaining = 0, ans = 0, number_of_players;
    sort(a, a + n);
    n--;
    while (n >= 0)
    {
        if (a[n] > d)
        {
            ans++;
            n--;
            remaining++;
        }
        else if (a[n] <= d)
        {
            number_of_players = (d / a[n]) + 1;
            if (number_of_players <= total - remaining)
            {
                ans++;
                remaining += number_of_players;
            }
            else
            {
                break;
            }
            if (remaining != total - 1)
                n--;
        }
    }
    cout << ans << endl;
}