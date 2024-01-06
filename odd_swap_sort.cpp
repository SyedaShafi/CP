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
        int ele;
        vector<int> even, odd;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele % 2 == 0)
                even.push_back(ele);
            else
                odd.push_back(ele);
        }
        bool flag = true;
        if (even.size() != 0)
            for (int i = 0; i < even.size() - 1; i++)
            {
                if (even[i] > even[i + 1])
                {
                    flag = false;
                    break;
                }
            }
        if (flag and odd.size() != 0)
        {
            for (int i = 0; i < odd.size() - 1; i++)
            {
                if (odd[i] > odd[i + 1])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}