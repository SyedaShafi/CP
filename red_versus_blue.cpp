#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b, cnt = 0, flag = 0;
        cin >> n >> r >> b;
        int r_in_per_part;
        r_in_per_part = r / (b + 1);
        int rem = r % (b + 1);
        vector<char> v;
        while (v.size() != n)
        {
            if (cnt == r_in_per_part)
            {
                cnt = 0;
                flag = 1;
                v.push_back('B');
            }
            else
            {
                v.push_back('R');
                if (rem != 0 && flag == 1)
                {
                    v.push_back('R');
                    flag = 0;
                    rem--;
                }
                cnt++;
            }
        }

        for (auto e : v)
            cout << e;
        cout << endl;
    }
}