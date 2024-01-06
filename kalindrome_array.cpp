#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int a[N];
bool ok(int ele, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] == ele)
            i++;
        else if (a[j] == ele)
            j--;
        else if (a[i] == a[j])
            i++, j--;
        else if (a[i] != a[j])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 0, j = n - 1, ele1 = -1, ele2 = -1;
        while (i < j)
        {
            if (a[i] != a[j])
            {
                ele1 = a[i];
                ele2 = a[j];
                break;
            }
            else
            {
                i++;
                j--;
            }
        }

        if (ele1 == -1)
        {
            cout << "YES\n";
            continue;
        }

        bool t1 = ok(ele1, n);
        bool t2 = ok(ele2, n);

        if (t1 || t2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}