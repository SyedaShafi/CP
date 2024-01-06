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
        string s, ans_seq = "";
        cin >> s;
        int first = s[0];
        int last = s[s.size() - 1];
        int len = 0;
        if (first < last)
        {
            for (int i = first; i <= last; i++)
            {
                for (int j = 0; j < s.size(); j++)
                {
                    if (i == s[j])
                    {
                        ans_seq += to_string(j + 1) + " ";
                        len++;
                    }
                }
            }
        }
        else if (first >= last)
        {
            for (int i = first; i >= last; i--)
            {
                for (int j = 0; j < s.size(); j++)
                {
                    if (i == s[j])
                    {
                        ans_seq += to_string(j + 1) + " ";
                        len++;
                    }
                }
            }
        }
        cout << abs(first - last) << " " << len << "\n"
             << ans_seq << "\n";
    }
}