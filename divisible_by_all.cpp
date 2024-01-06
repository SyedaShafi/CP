// Find numbers in between [L, R] which are divisible by
// all Array elements

// Input: arr[] = {3, 5, 12}, L = 90, R = 280
// Output : 120 180 240
// Explanation : 120, 180, 240 are the numbers which are divisible
// by all the arr[] elements.

// Input : arr[] = {4, 7, 13, 16},
// L = 200, R = 600 Output : -1

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int find_lcm(int a[], int n)
{
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        ans = (ans * a[i]) / (__gcd(ans, a[i]));
    }
    return ans;
}
int main()
{
    int n, L, R;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> L >> R;
    int lcm = find_lcm(a, n);
    if ((lcm < L && lcm * 2 > R) || lcm > R)
    {
        cout << -1 << endl;
        return 0;
    }
    int ans = (L / lcm) * lcm;
    if (ans < L)
        ans += lcm;
    for (int i = ans; i <= R; i += lcm)
        cout << i << " ";
    cout << endl;
}