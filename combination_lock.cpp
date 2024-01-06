#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int diff, ans = 0;
    for (int i = 0; i < n; i++)
    {
        diff = abs(s1[i] - s2[i]);
        if (diff > 5)
            ans += 10 - diff;
        else
            ans += diff;
    }
    cout << ans << endl;
}