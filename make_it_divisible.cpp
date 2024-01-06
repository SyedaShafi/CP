#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k = n;
        string str = "3";
        n = n - 2;
        while (n != 0 && n > 0)
        {
            str += "0";
            n--;
        }
        if (k == 1)
            cout << "3" << endl;
        else
            cout << str + "3" << endl;
    }
}