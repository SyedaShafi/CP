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
        int k, n;
        cin >> k >> n;
        vector<int> a;
        int temp = 1;
        for (int i = 0, j = 0; i < n; i++)
        {
            temp += j;
            if (temp <= n)
                a.push_back(temp);
            j++;
        }

        // for (int i = 0; i < a.size(); i++)
        //     cout << a[i] << " ";
        // cout << "\n";
        if (a.size() == k)
        {
            for (int i = 0; i < a.size(); i++)
                cout << a[i] << " ";
        }
        else
        {
            int last = a[0], l = k - 1, j = 1;
            cout << a[0] << " ";
            for (int i = 1; i < k; i++)
            {
                if (j < a.size() && (n - a[j]) >= l-1)
                {
                    cout << a[j] << " ";
                    last = a[j];
                    l--;
                    j++;
                }
                else
                {
                    last++;
                    cout << last << " ";
                }
            }
        }
        cout << "\n";
    }
}
