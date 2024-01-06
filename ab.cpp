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
        string s;
        cin >> s;
        int a = int(s[0]) - 48;
        int b = int(s[2]) - 48;
        cout << a + b << "\n";
    }
}