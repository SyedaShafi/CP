#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    string m;
    cin >> n >> m;
    vector<int> ans;
    if (n > 0)
    {
        while (n != 0)
        {
            ans.push_back(n % 10);
            n /= 10;
        }
        sort(ans.begin(), ans.end());
        if (ans.front() == 0)
        {
            int index = -1;
            for (int i = 1; i < ans.size(); i++)
            {
                if (ans[i] != 0)
                {
                    index = i;
                    break;
                }
            }
            swap(ans[0], ans[index]);
        }
    }

    int result = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        result = result * 10 + ans[i];
    }

    if (to_string(result) == m)
        cout << "OK\n";
    else
        cout << "WRONG_ANSWER\n";
}