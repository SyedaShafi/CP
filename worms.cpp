#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    int m;
    cin >> m;
    int y[m];
    for (int i = 0; i < m; i++)
        cin >> y[i];
    vector<int> a, b;
    a.push_back(1);
    b.push_back(x[0]);
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        temp += x[i];
        a.push_back(temp + 1);
    }
    temp = x[0];
    for (int i = 1; i < n; i++)
    {
        temp += x[i];
        b.push_back(temp);
    }
    int each_q;
    int high, low, mid;
    for (int i = 0; i < m; i++)
    {
        high = n - 1, low = 0;
        each_q = y[i];
        while (high - low >= 0)
        {
            mid = (high + low) / 2;
            if (b[mid] < each_q)
                low = mid + 1;
            else if (a[mid] > each_q)
                high = mid;
            else if (a[mid] <= each_q && b[mid] >= each_q)
            {
                cout << mid + 1 << endl;
                break;
            }
        }
    }
}