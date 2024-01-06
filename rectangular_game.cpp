#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 1;
vector<int> prime;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int ans = n;
    bool f = false;
    while (temp > 1)
    {
        f = false;
        for (int i = 2; 1LL * i * i <= temp; i++)
        {
            if (temp % i == 0)
            {
                f = true;
                temp /= i;
                break;
            }
        }
        if (!f)
        {
            ans++;
            break;
        }
        ans += temp;
    }
    cout << ans << "\n";
}