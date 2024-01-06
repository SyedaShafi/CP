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
        ll hc, dc, hm, dm, k, w, a, dca, hca;
        cin >> hc >> dc >> hm >> dm;
        cin >> k >> w >> a;
        ll nc, nm;

        bool flag = false;
        for (int i = 0; i <= k; i++)
        {
            dca = dc + (i * w);
            hca = hc + (k - i) * a;
            nc = (hm % dca > 0) ? (hm / dca) + 1 : (hm / dca);
            nm = (hca % dm > 0) ? (hca / dm) + 1 : (hca / dm);
            // cout << "dca " << dca << " hca " << hca << " nc " << nc << " nm " << nm;
            // cout << endl;
            if (nc <= nm)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}