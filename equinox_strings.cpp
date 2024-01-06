#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, s_point = 0, a_point = 0;
        cin >> n >> a >> b;
        while (n--)
        {

            string str;
            cin >> str;
            if (str[0] == 'E' || str[0] == 'Q' || str[0] == 'U' || str[0] == 'I' || str[0] == 'N' || str[0] == 'O' || str[0] == 'X')
                s_point += a;
            else
                a_point += b;
        }

        if (a_point < s_point)
            cout << "SARTHAK\n";
        else if (a_point > s_point)
            cout << "ANURADHA\n";
        else
            cout << "DRAW\n";
    }
}