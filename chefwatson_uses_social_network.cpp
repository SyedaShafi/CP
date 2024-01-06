#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n], f[m], p[m], index, i, j, mx_p = 0, flag = 0;
    string str[m];
    vector<string> temp;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < m; i++)
        cin >> f[i] >> p[i] >> str[i];

    for (i = 0; i < m; i++)
    {
        mx_p = 0;
        flag = 0;
        for (j = 0; j < m; j++)
        {
            mx_p = max(mx_p, p[j]);
        }

        for (j = 0; j < m; j++)
        {
            if (mx_p == p[j])
            {
                index = j;
                break;
            }
        }

        for (j = 0; j < n; j++)
        {
            if (f[index] == arr[j])
            {

                cout << str[index] << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            temp.push_back(str[index]);
        }

        p[index] = 0;
    }

    for (i = 0; i < temp.size(); i++)
        cout << temp[i] << endl;
}
