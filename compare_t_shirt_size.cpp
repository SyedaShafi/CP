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
        string a, b;
        cin >> a >> b;
        char l1, l2;
        l1 = a[a.size() - 1];
        l2 = b[b.size() - 1];
        // cout << (l1 < l2) << endl;
        if (l1 != l2)
        {
            if (l1 < l2)
                cout << ">\n";
            else if (l1 > l2)
                cout << "<\n";
            else
                cout << "=\n";
        }
        else
        {
            if (l1 == 'S')
            {
                int x1 = a.size() - 1;
                int x2 = b.size() - 1;
                if (x1 > x2)
                    cout << "<\n";
                else if (x1 < x2)
                    cout << ">\n";
                else
                    cout << "=\n";
            }
            else
            {
                int x1 = a.size() - 1;
                int x2 = b.size() - 1;
                if (x1 > x2)
                    cout << ">\n";
                else if (x1 < x2)
                    cout << "<\n";
                else
                    cout << "=\n";
            }
        }
    }
}