#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 1;
const int M = 998244353;
vector<int> g[N];
bool ok;
bool vis[N];
int color[N];
void dfs(int u)
{
    vis[u] = true;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            color[v] = color[u] ^ 1;
            dfs(v);
        }
        if (color[u] == color[v])
            ok = false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int edge = m;
        while (m--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        if (ok)
        {
            cout << (1LL * edge * 4) % M << "\n";
        }
        else
            cout << 0 << "\n";
    }
}