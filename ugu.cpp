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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int flag = 1, cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '1' and str[i + 1] == '0')
            {
                flag = 0;
                cnt++;
            }
            else if (str[i] != str[i + 1] and flag == 0)
            {
                flag = 1;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}