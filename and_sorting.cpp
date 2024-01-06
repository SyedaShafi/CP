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
        vector<int> v;
        int n, ele, ans;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele != i)
                v.push_back(i);
        }
        ans = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            ans = ans & v[i];
        }
        cout << ans << endl;
    }
}