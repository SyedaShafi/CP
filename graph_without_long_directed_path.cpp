#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 2 * 1e5 + 1;
vector<int> g[N];
bool vis[N];
int color[N];
bool ok;
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
        else
        {
            if (color[u] == color[v])
                ok = false;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> p;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        p.push_back({u, v});
    }
    ok = true;
    dfs(1);
    if (ok)
    {
        cout << "YES\n";
        for (auto ele : p)
        {
            if (color[ele.first] == 0 and color[ele.second] == 1)
                cout << 1;
            else
                cout << 0;
        }
        cout << "\n";
    }
    else
        cout << "NO\n";
}