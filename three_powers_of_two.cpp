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
        int sz;
        cin >> sz;
        string n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < sz; i++)
        {
            if (n[i] == '1')
                cnt++;
        }

        if (n == "1" || n == "10")
            cout << "NO\n";
        else if (cnt <= 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}