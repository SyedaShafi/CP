#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<char> s;
        for (int i = 0; i < 4; i++)
        {
            char ele;
            cin >> ele;
            s.insert(ele);
        }
        cout << s.size() - 1 << endl;
    }
}