#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> primes;
const int N = 1e5 + 7;
bool flag[N];
void seive()
{
    int n = N - 7;
    for (int i = 2; i * i <= n; i++)
    {
        if (flag[i] == false)
            for (int j = i * i; j <= n; j += i)
                flag[j] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (flag[i] == false)
            primes.push_back(i);
    }
}

int main()
{
    int tc;
    cin >> tc;
    seive();
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n], temp;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> t;

        bool f = 0;
        for (int i = 0; i < n; i++)
        {
            temp = a[i];
            for (int j = 0; j < primes.size(); j++)
            {
                if (temp % primes[j] == 0)
                {
                    while (temp % primes[j] == 0)
                    {
                        temp /= primes[j];
                    }
                    // cout << primes[j] << " ";
                    t[primes[j]]++;
                    // cout << "\nprime count: ";
                    // cout << t[primes[j]] << " ";
                }
            }
            if (temp > 0)
                t[temp]++;
        }
        // cout << t.size() << "\n";
        for (const auto &x : t)
        {
            // cout << x.first << " " << x.second << "\n";
            if (x.second >= 2 and x.first != 1)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}