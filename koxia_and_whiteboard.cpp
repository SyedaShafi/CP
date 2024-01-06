#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 10;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, ele;
        cin >> n >> m;
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v1.push_back(ele);
        }

        for (int i = 0; i < m; i++)
        {
            cin >> ele;
            v2.push_back(ele);
        }

        for (int i = 0; i < m; i++)
        {
            int it = *min_element(v1.begin(), v1.end());
            for (int j = 0; j < n; j++)
            {
                if (v1[j] == it)
                {
                    v1[j] = v2[i];
                    break;
                }
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += v1[i];
        cout << sum << "\n";
    }
}