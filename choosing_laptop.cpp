#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<int> v[n];
    int ele;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> ele;
            v[i].push_back(ele);
        }
    }

    bool outdated[n] = {false};
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j and (v[i][0] < v[j][0] and v[i][1] < v[j][1] and v[i][2] < v[j][2]))
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            outdated[i] = true;
            flag = 0;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << outdated[i] << " ";
    // }
    // cout << "\n";
    int cheap = INT_MAX, index = -1;
    for (int i = 0; i < n; i++)
    {
        if (outdated[i] == false)
        {
            if (v[i][3] < cheap)
            {
                index = i;
                cheap = v[i][3];
            }
        }
    }

    cout << index + 1 << "\n";
}