#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<int, multiset<string>> m;
    while (t--)
    {
        int marks;
        string name;
        cin >> name >> marks;
        m[marks].insert(name);
    }

    auto it = --m.end();
    int n = m.size();
    while (n--)
    {
        for (auto &pr : (*it).second)
        {
            cout << pr << " " << it->first << endl;
        }
        it--;
    }
}