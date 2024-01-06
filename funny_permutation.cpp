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
        if (n == 3)
            cout << -1 << "\n";
        else if (n % 2 == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << "\n";
        }
        else
        {
            int index = (n / 2 + 1);
            for (int i = n; i > index; i--)
                cout << i << " ";
            for (int i = 1; i <= index ; i++)
                cout << i << " ";
            cout << endl;
        }
    }
}