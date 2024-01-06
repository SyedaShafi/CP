#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t, cs = 1;
    cin >> t;
    while (t--)
    {
        ll n, flag = 1, ans=0;
        string str, an;
        cin >> n >> str;
        an = str;
        cout << "Case " << cs << ": ";
        cs++;
        while (flag != 0)
        {
            ans = (ans * 10LL % n + (str[str.size() - 1] - '0')) % n;
            if (ans == 0)
                flag = 0;
            else
                str += an;
        }
        cout << str.size() << "\n";
    }
}