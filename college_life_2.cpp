#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        long int episode_no, t1, ans = 0;
        long int i, j, intro_song[s], time[s] = {0};

        for (i = 0; i < s; i++)
        {
            cin >> intro_song[i];
        }

        for (j = 0; j < s; j++)
        {
            t1 = 0;
            cin >> episode_no;
            int episode_time[episode_no];
            for (i = 0; i < episode_no; i++)
            {
                cin >> episode_time[i];
                t1 += episode_time[i];
            }
            time[j] = t1 + intro_song[j] - (intro_song[j] * episode_no);
        }

        for (i = 0; i < s; i++)
            ans += time[i];

        cout << ans << endl;
    }
}