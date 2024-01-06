#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;

int binary_search(int *a, int n, int ele)
{
    int l = 1, r = n, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a[mid] < ele)
        {
            l = mid + 1;
        }
        else if (a[mid] >= ele)
        {
            ans = mid;
            r = mid - 1;
        }
    }
    if (ans > 0)
        return ans;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        int pre_sum[n + 2] = {0};
        for (int i = 0; i < n; i++)
        {
            pre_sum[i + 1] = pre_sum[i] + a[i];
        }
        int ele;
        while (q--)
        {
            cin >> ele;
            int cnadies = 0;
            int index = binary_search(pre_sum, n, ele);
            cout << index << "\n";
        }
    }
}