#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s, tmp = "", num = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
            num += s[i];
        else if ((s[i] >= 'a' and s[i] <= 'z') || (s[i] >= 'A' and s[i] <= 'Z'))
        {
            tmp += s[i];
        }
        else if (s[i] == '+')
        {
            int n = stoi(num);
            while (n--)
            {
                cout << tmp;
            }
            tmp = "";
            num = "";
        }
    }
    int n = stoi(num);
    while (n--)
    {
        cout << tmp;
    }
    tmp = "";
    num = "";
}