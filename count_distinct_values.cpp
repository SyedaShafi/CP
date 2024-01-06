#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int element;
        cin >> element;
        s.insert(element);
    }
    cout << 2 << "\n"
         << s.size() << endl;
}