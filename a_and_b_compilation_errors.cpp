#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{

    int n;
    cin >> n;
    vector<int> a, b;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        a.push_back(ele);
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++)
    {
        cin >> ele;
        b.push_back(ele);
    }
    sort(b.begin(), b.end());
    int ans1 = -1, ans2 = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != b[i])
        {
            ans1 = a[i];
            break;
        }
    }
    if (ans1 == -1)
        ans1 = a.back();

    a.clear();
    for (int i = 0; i < n - 2; i++)
    {
        cin >> ele;
        a.push_back(ele);
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] != b[i])
        {
            ans2 = b[i];
            break;
        }
    }
    if (ans2 == -1)
        ans2 = b.back();

    cout << ans1 << "\n"
         << ans2 << "\n";
}