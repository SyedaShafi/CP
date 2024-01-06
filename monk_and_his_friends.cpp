#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        multiset<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            s.insert(temp);
        }
        for (int i = 0; i < m; i++)
        {

            long long temp2;
            cin >> temp2;
            if (s.find(temp2) != s.end())
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
                s.insert(temp2);
            }
        }
    }
}