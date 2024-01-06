#include <bits/stdc++.h>
#include <string>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int index = -1, temp;
        for (int i = x.size() - 1; i > 0; i--)
        {
            temp = (x[i] - '0');
            temp += (x[i + 1] - '0');
            if (temp > 9)
            {
                index = i;
                break;
            }
        }
        // cout << index << "\n";
        if (index != -1)
        {
            for (int i = 0; i < index; i++)
            {
                cout << x[i];
            }
            cout << temp;
            for (int i = index + 2; i < x.size(); i++)
                cout << x[i];
            cout << "\n";
        }
        else
        {
            cout << x[0] - '0' + x[1] - '0';
            for (int i = 2; i < x.size(); i++)
                cout << x[i];
            cout << "\n";
        }
    }
}