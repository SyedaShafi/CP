#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int sum = 0, i;
    for (int i = 0; i < str.size(); i++)
    {

        switch (str[i])
        {
        case 'I':
            sum += 1;
            break;

        case 'V':
            sum += 5;
            break;

        case 'X':
            sum += 10;
            break;

        case 'L':
            sum += 50;
            break;

        case 'C':
            sum += 100;
            break;
        case 'D':
            sum += 500;
            break;

        case 'M':
            sum += 1000;
            break;
        }
    }

    for (i = 0; i < str.size() - 1; i++)
    {
        if ((str[i] == 'I' && str[i + 1] == 'V') || (str[i] == 'I' && str[i + 1] == 'X'))
            sum -= 1 * 2;
        else if ((str[i] == 'X' && str[i + 1] == 'L') || (str[i] == 'X' && str[i + 1] == 'C'))
            sum -= 10 * 2;
        else if ((str[i] == 'C' && str[i + 1] == 'D') || (str[i] == 'C' && str[i + 1] == 'M'))
            sum -= 100 * 2;
    }
    cout << sum << endl;
}