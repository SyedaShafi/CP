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
        int i = 1, j = n * n, cnt = 0;
        vector<int> v;
        while (i < j)
        {
            v.push_back(i);
            v.push_back(j);
            i++;
            j--;
        }
        if (i == j)
            v.push_back(i);
        int l = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (l & 1 and l > 0)
            {
                for (int j = i + n - 1; j >= i; j--)
                    cout << v[j] << " ";
                cout << "\n";
                i += n - 1;
                l++;
            }
            else
            {
                for (int j = i; j < i + n; j++)
                    cout << v[j] << " ";
                cout << "\n";
                i += n - 1;
                l++;
            }
        }
    }
}