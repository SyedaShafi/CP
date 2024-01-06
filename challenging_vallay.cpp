// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// const int N = 1e7 + 1;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         vector<int> temp;
//         int same = 1;
//         for (int i = 1; i < n; i++)
//         {
//             if (a[i - 1] == a[i])
//             {
//                 if (same == 1)
//                     temp.push_back(a[i - 1]);
//                 same = 0;
//             }
//             else
//             {
//                 if (same == 1)
//                     temp.push_back(a[i - 1]);
//                 same = 1;
//             }
//         }
//         if (n > 1 and (a[n - 1] != a[n - 2]))
//             temp.push_back(a[n - 1]);

//         if (n == 1)
//             temp.push_back(a[0]);

//         // for (int i = 0; i < temp.size(); i++)
//         //     cout << temp[i] << " ";
//         // cout << "\n";
//         int sz = temp.size();
//         int cnt = 0;
//         for (int i = 1; i < sz - 1; i++)
//         {
//             if (temp[i] < temp[i + 1] and temp[i] < temp[i - 1])
//             {
//                 cnt++;
//             }
//         }
//         if (sz > 1 and temp[0] < temp[1])
//             cnt++;
//         if (sz > 1 and temp[sz - 1] < temp[sz - 2])
//             cnt++;
//         if (sz == 1)
//             cnt++;

//         if (cnt == 1 || n == 1)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, f, i, dec, inc;

    cin >> t;

    for (; t--;)
    {
        cin >> n;

        ll a[n];

        dec = 0;
        inc = 0;
        f = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                inc++;
            }
            else if (a[i] < a[i - 1])
            {
                dec++;
                if (inc > 0)
                {
                    f++;
                    break;
                }
            }
        }

        if (f == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}