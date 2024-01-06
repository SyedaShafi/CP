#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 1;
vector<int> g[N];
bool vis[N];
int color[N];
bool ok;
void dfs(int node)
{
    vis[node] = true;
    for (auto u : g[node])
    {
        if (!vis[u])
        {
            color[u] = color[node] ^ 1;
            dfs(u);
        }
        else
        {
            if (color[u] == color[node])
                ok = false;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
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
        cout << "YES\n";
    else
        cout << "NO\n";
}