#include <bits/stdc++.h>
#include <string>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    string temp = "";
    int j = 0;
    string c = "";
    string op = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '9' || s[i] == '8' || s[i] == '7' || s[i] == '6' || s[i] == '5' || s[i] == '4' || s[i] == '3' || s[i] == '2' || s[i] == '1')
        {
            temp.clear();
            c = s[i];
            int cnt;
            stringstream obj;
            obj << c;
            obj >> cnt;
            j = i + 1;
            while (j < s.size())
            {
                if (s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/')
                {
                    op = s[j];
                    break;
                }
                else
                    temp += s[j];
                j++;
            }
            i = j;
            // cout << "temp :" << temp << " op: " << op << " cnt :" << cnt << "\n";
            for (int k = 0; k < cnt; k++)
            {
                cout << temp;
            }

            cout << op;
            op = "";
        }
    }
    cout << "\n";
}