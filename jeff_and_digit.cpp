#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int ele, zero = 0, five = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        if (ele == 0)
            zero++;
        else
            five++;
    }

    if (zero == 0)
        cout << -1 << "\n";
    else if (five < 9)
        cout << 0 << "\n";
    else
    {
        int cnt = five / 9;
        cnt = cnt * 9;
        for (int i = 0; i < cnt; i++)
            cout << 5;
        for (int i = 0; i < zero; i++)
            cout << 0;
        cout << "\n";
    }
}