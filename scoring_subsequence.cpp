#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            q.push(a[i]);
            while (q.front() < q.size())
                q.pop();
            cout << q.size() << " ";
        }
        cout << "\n";
    }
}