#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n >= 2)
    {
        if (n == 3)
        {
            v.push_back(3);
            n -= 3;
        }
        else
        {
            v.push_back(2);
            n -= 2;
        }
    }
    cout << v.size() << endl;
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}