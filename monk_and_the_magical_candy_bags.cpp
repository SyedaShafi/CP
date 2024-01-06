#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, n, value, ans = 0;
        cin >> n >> k;
        multiset<long long> s;
        for (int i = 0; i < n; i++)
        {
            cin >> value;
            s.insert(value);
        }

        for (int i = 0; i < k; i++)
        {
            auto last_index = (--s.end());
            long long mx_value = (*last_index);
            ans += mx_value;
            s.erase(last_index);
            s.insert(mx_value / 2);
        }
        cout << ans << endl;
    }
}