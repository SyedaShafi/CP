#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    int b;
    cin >> b;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans = (ans * 10 + (s[i] - '0') )% b;
    }
    if (ans == 0)
        cout << "The number is divisible by b\n";
    else
        cout << "Sad not possible\n";
}