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
        int a, b;
        cin >> a >> b;
        int ans = 0, len = a;
        
        if ((a - 1) % 4 == 0)
            ans = a - 1;
        else if ((a - 1) % 4 == 1)
            ans = 1;
        else if ((a - 1) % 4 == 2)
            ans = a;
        else if ((a - 1) % 4 == 3)
            ans = 0;

        if (ans == b)
            len = a;
        else if ((ans ^ b) != a)
            len++;
        else
            len += 2;
        cout << len << endl;
    }
}