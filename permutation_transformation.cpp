#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 107;
int a[N];
int n;
vector<int> g(N);
void tree(int l, int r, int depth)
{
    if (l > r)
        return;
    int mx = 0, index = 0;
    for (int i = l; i <= r; i++)
    {
        if (mx < a[i])
        {
            mx = a[i];
            index = i;
        }
    }
    g[mx] = depth;
    // cout << "1bef " << l << " " << index - 1 << " " << depth + 1 << "\n";
    tree(l, index - 1, depth + 1);
    // cout << "aft " << l << " " << index - 1 << " " << depth + 1 << "\n";
    tree(index + 1, r, depth + 1);
    // cout << "2nd " << index + 1 << " " << r << " " << depth + 1 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        g.clear();
        tree(0, n - 1, 0);
        for (int i = 0; i < n; i++)
        {
            cout << g[a[i]] << " ";
        }
        cout << "\n";
    }
}