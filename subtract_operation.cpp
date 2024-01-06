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
        ll n, k;
        cin >> n >> k;
        ll ele;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            s.insert(ele);
        }
        ll temp = 0;
        bool f = false;
        for (auto i = s.begin(); i != s.end(); i++)
        {
            temp = *i + k;
            if (s.find(temp) != s.end())
                f = true;
        }

        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}