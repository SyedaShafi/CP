#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << a[0] << " ";
    for (int i = 0; i < n-1; i++)
    {
        cout << a[i + 1] - a[i] << " ";
    }
    cout << "\n";
}