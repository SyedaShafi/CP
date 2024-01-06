#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, i, k;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], temp[n] = {0};
        for (i = 0; i < n; i++)
            cin >> a[i];

        if (n % 2 == 0)
        {
            ll flag = 0;
            sort(a, a + n);
            ll mid = n / 2;
            ll j = mid;
            for (i = 0; i < mid; i++)
            {

                if (a[i] == a[j])
                {
                    flag = 1;
                    break;
                }

                else
                    j++;
            }
            if (flag == 0)
            {
                k = 0;
                j = mid;
                for (i = 0; i < mid; i++)
                {

                    temp[k] = a[i];
                    k++;
                    temp[k] = a[j];
                    k++;
                    j++;
                }
                for (i = 0; i < n - 1; i++)
                {
                    if (temp[i] == temp[i + 1])
                        flag = 1;
                }
            }

            if (flag == 0)
            {

                cout << "YES\n";
                for (i = 0; i < n; i++)
                {
                    cout << temp[i] << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
}