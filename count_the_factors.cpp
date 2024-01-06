#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1;
bool mark[N];
vector<int> prime;
vector<int> twin_prime;
int main()
{
    int cnt, temp;
    int st;
    while (cin >> st && st != 0)
    {
        cnt = 0;
        temp = st;
        for (int i = 2; i <= st; i++)
        {
            if (!(st % i))
            {
                cnt++;
                while (!(st % i))
                {
                    st /= i;
                }
            }
        }

        if (st > 1)
            cnt++;
        cout << temp << " : " << cnt << endl;
    }
}