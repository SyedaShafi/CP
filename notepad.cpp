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
        string s;
        cin >> s;
        int i = 0, j, t = n, f = 0;
        string target, temp;
        if (n > 3)
        {
            i = 0;
            j = n - 3;
            while (j > 0)
            {
                cout << "T value " << t << endl;
                target = s.substr((t - 2), 2);
                cout << "target " << target << "\n";
                temp = s.substr(i, j+1);
                cout << "TEmp " << temp << "\n";
                int len = temp.find(target);
                cout << "LEN " << len << endl;
                j--;
                t--;

                if (len != -1)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
}