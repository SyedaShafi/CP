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
        int i = 1;
        int j = (n / 2) + 1;
        while (j <= n)
        {
            if (j <= n)
                cout << j << " ";
            if (i < (n / 2) + 1)
                cout << i << " ";
            j++;
            i++;
        }
        cout << endl;
    }
}