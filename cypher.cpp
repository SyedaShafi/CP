#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        string b;
        for (int j = 0; j < n; j++)
        {
            int bi;
            cin >> bi;
            cin >> b;
            for (int i = 0; i < bi; i++)
            {
                if (b[i] == 'D')
                {
                    if (a[j] == 9)
                        a[j] = 0;
                    else
                        a[j]++;
                }
                else
                {
                    if (a[j] == 0)
                        a[j] = 9;
                    else
                        a[j]--;
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}