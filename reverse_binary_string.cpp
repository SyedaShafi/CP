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
        string a;
        cin >> a;
        int len = 1, op = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                len++;
            }
        }
        // cout << "len : " << len << "\n";
        cout << len / 2 << "\n";
    }
}