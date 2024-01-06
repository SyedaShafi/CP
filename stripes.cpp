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
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int flag = 0;

        for (int i = 0; i < 8; i++)
        {
            if (a[i][0] == 'R')
            {
                flag = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (a[i][j] == 'R')
                    {
                        flag++;
                    }
                }
                if (flag == 8)
                    break;
            }
        }
        if (flag == 8)
            cout << "R\n";
        else
            cout << "B\n";
    }
}