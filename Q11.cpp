// Q 11 .  remove extra space

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s, temp;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            while (s[i] == ' ' and i < s.size())
            {
                i++;
            }
            temp = temp + ' ' + s[i];
        }
        else
            temp += s[i];
    }
    if (temp[0] == ' ')
    {
        temp.erase(0, 1);
    }

    cout << "Before removing space : " << s << endl;
    cout << "After removing space : " << temp << endl;
}