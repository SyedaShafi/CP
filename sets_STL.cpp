#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    set<long long int> s1;
    while (q--)
    {
        long long int x, y;
        cin >> y >> x;
        if (y == 1)
        {
            s1.insert(x);
        }

        else if (y == 2)
        {
            s1.erase(x);
        }
        else if (y == 3)
        {
            if ((s1.find(x)) != s1.end())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}