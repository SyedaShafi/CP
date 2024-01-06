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
        string a, b;
        cin >> a >> b;
        int cnt = 0, mx = 0;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    cnt = 0;
                    for (int k = i, m = j;; k++, m++)
                    {
                        if (k >= a.size() || m >= b.size())
                            break;
                        if (a[k] == b[m])
                            cnt++;
                        else
                            break;
                    }
                    mx = max(cnt, mx);
                }
            }
        }
        cout << a.size() + b.size() - (mx * 2) << "\n";
    }
}