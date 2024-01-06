#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> g[N];
int indeg[N];
bool vis[N];

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        indeg[v]++;
        g[u].push_back(v);
    }

    vector<int> ans;

    while (ans.size() < n)
    {
        int cur = 0;

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i] and indeg[i] == 0)
            {
                cur = i;
                break;
            }
        }
        if (cur == 0)
        {
            cout << "Impossible\n";
            return 0;
        }
        vis[cur] = true;
        ans.push_back(cur);

        for (auto ele : g[cur])
        {
            indeg[ele]--;
        }
    }

    for (auto x : ans)
        cout << x << ' ';
    cout << "\n";
}