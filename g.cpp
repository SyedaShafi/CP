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
        ll bl[3], suitcase[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> suitcase[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> bl[i];
        }

        sort(suitcase, suitcase + 3);
        ll cnt = 0;
        bool ok = true;
        while (1)
        {
            if (suitcase[0] >= bl[2] and ((suitcase[1] >= bl[2] and suitcase[2] >= bl[1]) || (suitcase[1] >= bl[1] and suitcase[2] >= bl[2])))
            {
                break;
            }
            if (bl[2] < 0)
            {
                ok = false;
                break;
            }
            if (bl[0] > bl[1])
                bl[0] -= ((bl[0] + 1) / 2);
            else
                bl[1] = bl[1] - ((bl[1] + 1) / 2);
            bl[2] *= 2;
            cnt++;
        }
        if (ok)
            cout << cnt << "\n";
        else
            cout << -1 << "\n";
    }
}