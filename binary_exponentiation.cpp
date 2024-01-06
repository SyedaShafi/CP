#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int M = 1e9 + 7;
// ***********RECURSIVE METHOD**************
// int binary_exponantiation_recursive(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     int res = binary_exponantiation_recursive(a, b / 2);
//     // b&1 return even or odd if ans is 1 then even else odd
//     if (b & 1)
//     {
//         return (a * (res * 1LL * res) % M) % M;
//     }
//     else
//     {
//         return (res * 1LL * res) % M;
//     }
// }
// int main()
// {
//     int a, b;
//     cout << binary_exponantiation_recursive(3, 3);
// }






// *******ITERATIVE METHOD**********


int binary_exponentiation(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }

        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}
// if a is long long and M(mod) is also long long in this case;
int binary_exponentiation_large(ll a, ll b)
{
    a %= M;
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = binary_multiplication(ans, a);
        }
        a = binary_multiplication(a, a);
        b >>= 1;
    }
    return ans;
}

int binary_multiplication(ll a, ll b)
{
    int ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int a = 2, b = 3;
    cout << binary_exponentiation(a, b);
}