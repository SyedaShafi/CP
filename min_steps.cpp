#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 6;
int s[N];
int steps(int i)
{
    if (i == 1)
        return 0;
    if (s[i] != -1)
        return s[i];
    int ans = steps(i - 1) + 1;
    if (i % 2 == 0)
        ans = min(ans, steps(i / 2) + 1);
    if (i % 3 == 0)
        ans = min(ans, steps(i / 3) + 1);

    s[i] = ans;
    return s[i];
}
int main()
{

    int n = 6;
    memset(s, -1, sizeof s);
    s[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int ans = s[i - 1] + 1;
        if (i % 2 == 0)
            ans = min(ans, s[i / 2] + 1);
        if (i % 3 == 0)
            ans = min(ans, s[i / 3] + 1);
        s[i] = ans;
    }

    cout << s[n] << endl;
    return 0;
}
