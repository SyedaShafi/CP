#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1000+1;
vector<pair<int, int>> a(N);
void divisors_cnt()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            a[j].first = j;
            a[j].second++;
        }
    }
}
bool cmp(pair<int, int> x, pair<int, int> y)
{
    if (x.second != y.second)
        return x.second < y.second;
    return x.first > y.first;
}
int main()
{
    divisors_cnt();
    sort(a.begin(), a.end(), cmp);
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "Case " << i << ": ";
        cout << a[n].first << "\n";
    }

    // for (int i = 1; i < 100; i++)
    //     cout << a[i].first << " " << a[i].second << "\n";
}