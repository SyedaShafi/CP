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
        int sz = 2 * n;
        int a[sz];
        for (int i = 0; i < sz; i++)
            cin >> a[i];
        vector<int> index;
        int len = 0;
        for (int i = 0; i < sz; i++)
        {
            if (len == (n - 1))
                break;
            if ((a[i] != -1) and (a[i] % 2) == 1)
            {
                for (int j = i + 1; j < sz; j++)
                {
                    if ((a[j] != -1) and (a[j] % 2) == 1)
                    {
                        index.push_back(i);
                        index.push_back(j);
                        a[j] = -1;
                        a[i] = -1;
                        len++;
                        break;
                    }
                }
            }
            else if ((a[i] != -1) and (a[i] % 2) == 0)
            {
                for (int j = i + 1; j < sz; j++)
                {
                    if ((a[j] != -1) and (a[j] % 2) == 0)
                    {
                        index.push_back(i);
                        index.push_back(j);
                        a[j] = -1;
                        a[i] = -1;
                        len++;
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < index.size(); i += 2)
        {
            cout << index[i] + 1 << " " << index[i + 1] + 1 << "\n";
        }
    }
}