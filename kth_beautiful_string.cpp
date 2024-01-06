#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 7;
int main()
{
    vector<ll> a;
    ll temp = 1;
    for (int i = 1; i < N; i++)
    {
        a.push_back(temp);
        temp += i;
    }
    // for (int i = 0; i < 7; i++)
    //     cout << a[i] << " ";
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s(n, 'a');
        vector<ll>::iterator upper;
        upper = upper_bound(a.begin(), a.end(), k);
        int itr1 = (upper - a.begin());
        // cout << itr1 << " value :" << a[itr1 - 1] << "\n";
        int itr2 = k - a[itr1 - 1];
        s[n - itr1 - 1] = 'b';
        s[n - itr2 - 1] = 'b';
        cout << s << "\n";
    }
}