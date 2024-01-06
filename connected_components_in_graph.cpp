#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
bool vis[N];
vector<vector<int>> connected_components;
vector<int> current_component;
void dfs(int vertex)
{
    vis[vertex] = true;

    current_component.push_back(vertex);
    for (int child : graph[vertex])
    {
        if (!vis[child])
            dfs(child);
    }
}
int main()
{
    int n, e, cnt = 0;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            current_component.clear();
            dfs(i);
            connected_components.push_back(current_component);
            cnt++;
        }
    }
    // cout << cnt << endl;
    for (auto i : connected_components)
    {
        for (auto ele : i)
            cout << ele << " ";
        cout << "\n";
    }
}
