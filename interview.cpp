#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 3];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int l = 1, r = n, mid;
        while (l != r)
        {
            int sum = 0;
            mid = l + (r - l) / 2;
            printf("? %d ", (mid - l + 1));
            for (int i = l; i <= mid; i++)
            {
                printf("%d ", i);
                sum += a[i];
            }
            cout << "\n";
            fflush(stdout);

            ll weight;
            scanf("%lld", &weight);

            if (weight > sum)
                r = mid;
            else
                l = mid + 1;
        }
        printf("! %d\n", l);
        fflush(stdout);
    }
}