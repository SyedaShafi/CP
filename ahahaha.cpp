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
        int ele, cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele)
                cnt1++;
            else
                cnt0++;
        }

        if (cnt1 <= (n / 2))
        {
            cout << cnt0 << "\n";
            for (int i = 0; i < cnt0; i++)
                cout << 0 << " ";
            cout << "\n";
        }

        else if ((cnt1 & 1) and (cnt0 < (n / 2)))
        {
            cnt1--;
            cout << cnt1 << "\n";
            for (int i = 0; i < cnt1; i++)
                cout << 1 << " ";
            cout << "\n";
        }
        else
        {
            cout << cnt1 << "\n";
            for (int i = 0; i < cnt1; i++)
                cout << 1 << " ";
            cout << "\n";
        }
    }
}