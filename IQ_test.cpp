#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int ele, index_odd = -1, index_even = -1, even = 0, odd = 0;
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> ele;
        if (ele % 2 != 0)
        {
            odd++;
            index_odd = i;
        }
        else
        {
            even++;
            index_even = i;
        }
    }
    if (odd == 1)
        cout << index_odd << "\n";
    else if (even == 1)
        cout << index_even << "\n";
}
