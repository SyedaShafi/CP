#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 7;
vector<int> tree[N];
bool vis[N];
int number_of_cats, mx_cat, leaf;
int n, m, ans = 0;
void dfs(int u, int parent, int number_of_cats, int mx_cat)
{
    if (vis[u])
        number_of_cats++;
    else
        number_of_cats = 0;
    mx_cat = max(mx_cat, number_of_cats);
    // cout << u << " " << parent << " " << number_of_cats << " " << mx_cat << "\n";
    int child = 0;
    for (auto v : tree[u])
    {
        if (v != parent)
        {
            dfs(v, u, number_of_cats, mx_cat);
            child++;
        }
    }
    if (child == 0 and mx_cat <= m)
        ans++;
}
int main()
{
    cin >> n >> m;
    int ele, u, v;
    for (int i = 1; i <= n; i++)
    {
        cin >> ele;
        if (ele == 1)
            vis[i] = true;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, -1, 0, 0);
    cout << ans << "\n";
}