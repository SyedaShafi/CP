#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> g[N];
bool vis[N];
int dis[N], parent[N];
int main()
{
    int node, edge;
    cin >> node >> edge;

    while (edge--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    q.push(1);
    vis[1] = true;
    dis[1] = 0;

    while (!q.empty())
    {
        int ele = q.front();
        q.pop();
        for (auto x : g[ele])
        {
            if (!vis[x])
            {
                q.push(x);
                parent[x] = ele;
                vis[x] = true;
                dis[x] = dis[ele] + 1;
            }
        }
    }

    for (int i = 1; i <= node; i++)
        cout << dis[i] << " ";
    cout << "\n";

    int path = 7;
    while (path != 1)
    {
        cout << path << " ";
        path = parent[path];
    }
    cout << 1 << "\n";
}