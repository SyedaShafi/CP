#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0, n = 20, temp, mx = 0;
    for (int i = 1; i <= 20; i++)
    {
        ans = 0;
        temp = i;
        while (!(temp % 2))
        {
            if (!(temp % 2))
                ans++;
            temp /= 2;
        }
        mx += ans;
    }
    cout << mx << endl;
}