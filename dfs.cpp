#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> g[N];
bool vis[N];
void dfs(int u)
{
    vis[u] = true;
    for (auto ele : g[u])
    {
        if (!vis[ele])
            dfs(ele);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    // finding connected and disconnected graph
    // dfs(1);

    // for (int i = 1; i <= n; i++)
    // {
    //     if (!vis[i])
    //     {
    //         cout << "Disconnected graph\n";
    //         return 0;
    //     }
    // }
    // cout << "Connected graph\n";
    // return 0;

    // finding connected components
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            ans++;
        }
    }

    cout << "Connected components :" << ans << "\n";
}