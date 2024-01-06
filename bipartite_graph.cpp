#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> g[N];
bool vis[N];
int color[N];
bool ok;
void dfs(int n)
{
    vis[n] = true;
    for (auto ele : g[n])
    {
        if (!vis[ele])
        {
            color[ele] = color[n] ^ 1;
            dfs(ele);
        }

        else
        {
            if (color[ele] == color[n])
            {
                ok = false;
                return;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    ok = true;
    for (int i = 1; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (ok)
        cout << "YES it is biparted\n";
    else
        cout << "No it is not biparted\n";
}