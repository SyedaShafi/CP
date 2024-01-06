#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int freq_s[26] = {0}, freq_t[26] = {0}, i, diff, cnt = 0;
        for (i = 0; i < s.size(); i++)
            freq_s[s[i] - 'a']++;
        for (i = 0; i < t.size(); i++)
            freq_t[t[i] - 'a']++;

        for (i = 0; i < 26; i++)
        {
            diff = abs(freq_s[i] - freq_t[i]);
            if (diff > 0)
                cnt += diff;
        }

        cout << cnt << endl;
    }
}