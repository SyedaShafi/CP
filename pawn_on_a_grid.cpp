#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int r, c, cnt = 0;
    char temp;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> temp;
            if (temp == '#')
                cnt++;
        }
    }
    cout << cnt << endl;
}