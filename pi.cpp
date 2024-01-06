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
        string temp = "314159265358979323846264338327";
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == temp[i])
                cnt++;
            else
                break;
        }
        cout << cnt << "\n";
    }
}
