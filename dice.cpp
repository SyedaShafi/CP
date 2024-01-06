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
        int n, s, r;
        cin >> n >> s >> r;
        int diff = s - r;
        int rem = r % (n - 1);
        cout << diff << " ";
        int ele = r / (n - 1);
        for (int i = 1; i <= n - 1; i++)
        {
            if (rem > 0)
            {
                cout << ele + 1 << " ";
                rem--;
            }
            else
                cout << ele << " ";
        }
        cout << "\n";
    }
}