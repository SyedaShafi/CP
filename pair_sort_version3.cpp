#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first > b.first;
    }
}
int main()
{
    ll n, i;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    ll e;
    for (i = 0; i < n; i++)
    {
        cin >> e;
        p[i].first = e;
    }

    for (i = 0; i < n; i++)
    {
        cin >> e;
        p[i].second = e;
    }

    sort(p.begin(), p.end(), comp);
    for (i = 0; i < n; i++)
    {
        cout << p[i].first << " " << p[i].second << " ";
    }
}