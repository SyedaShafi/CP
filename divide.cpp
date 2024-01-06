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
        ll n;
        cin >> n;
        ll ele, sum = 0, t;
        ll s_even = N, s_odd = N;
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            sum += ele;
            if (ele % 2 == 0)
                even.push_back(ele);
            else
                odd.push_back(ele);
        }
        ll cnt1 = INT_MAX, cnt2 = INT_MAX;
        if (sum % 2 == 0)
            cout << 0 << "\n";
        else
        {
            for (int i = 0; i < even.size(); i++)
            {
                t = 0;
                ll temp = even[i];
                while (temp % 2 == 0)
                {
                    t++;
                    temp /= 2;
                }
                cnt1 = min(cnt1, t);
            }
            for (int i = 0; i < odd.size(); i++)
            {
                t = 0;
                ll temp = odd[i];
                while (temp % 2 != 0)
                {
                    t++;
                    temp /= 2;
                }
                cnt2 = min(cnt2, t);
            }

            cout << min(cnt1, cnt2) << "\n";
        }
    }
}
