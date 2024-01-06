#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<pair<int, int>> g[N];
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        g[v1].push_back({v2, wt});
        g[v2].push_back({v1, wt});
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<"Node "<<i<<" :: ";
        for (pair<int, int> p : g[i])
        {
            cout << p.first << " " << p.second << " ";
        }
        cout << "\n";
    }
}