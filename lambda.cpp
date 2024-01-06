#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 8, 9};
    cout << none_of(v.begin(), v.end(),
                   [](int x)
                   { return x % 2 == 0; });
}