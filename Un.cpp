#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1;
        cin >> str2;

        int flag = 0, i, freq_str1[26] = {0}, freq_str2[26] = {0}, cnt, k = 0, j, track = 0,m;

        for (i = 0; i < str1.size(); i++)
           freq_str1[str1[i] - 'a']++;

        for (i = 0; i < str2.size(); i++)
        {
            freq_str2[str2[i] - 'a']++;
            k++;
            if (k == str1.size())
            {
                track++;
                cnt = 0;
                k = 0;
                i = track - 1;
                for (j = 0; j < 26; j++)
                {
                    if ((freq_str1[j] != 0 && freq_str2[j] != 0) && (freq_str1[j] == freq_str2[j]))
                    {
                        cnt++;
                        if (cnt == str1.size())
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                for(m=0; m<26; m++)
                    freq_str2[m] = 0;
            }
        }
        if (flag == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
