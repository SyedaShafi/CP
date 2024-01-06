#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], value = 1;
        for (int i = 0; i < n; i++)
        {
            a[i] = value;
            value++;
        }

        int j = 0;
        cout << n << endl;

        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
        
        for (int i = 1; i < n; i++)
        {
            swap(a[j], a[i]);
            for (int k = 0; k < n; k++)
                cout << a[k] << " ";
            cout << endl;
        }
    }
}
