#include <bits/stdc++.h>
#define ll long long int

using namespace std;
#define M 1000000000 + 7
int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        string a, b;
        cin >> a >> b;
        bool aa = false, bb = false;
        if (a.size() != b.size())
        {
            if (a.size() < b.size())
            {
                int diff = b.size() - a.size();
                string temp(diff, '0');
                a = temp + a;
            }
            else
            {
                int diff = a.size() - b.size();
                string temp(diff, '0');
                b = temp + b;
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
                continue;
            else if (a[i] == '1' and b[i] == '0')
            {
                aa = true;
                break;
            }
            else if (a[i] == '0' and b[i] == '1')
            {
                bb = true;
                break;
            }
        }
        // cout << a << " " << b << "\n";
        cout << "Case " << t << ": ";
        if (bb)
            cout << "B\n";
        else if (aa)
            cout << "A\n";
        else
            cout << "Same\n";
    }
}