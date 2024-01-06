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
        int ele, sum = 0;
        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= 2; j++)
            {
                cin >> ele;
                sum += ele;
            }
        }
        if (sum == 0)
            cout << 0 << "\n";
        else if (sum == 4)
            cout << 2 << "\n";
        else
            cout << 1 << "\n";
    }
}