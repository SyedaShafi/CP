#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int isPrime(ll sum)
{
    for (int i = 2; i < sum; i++)
    {
        if (sum % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    string str;
    cin >> str;
    ll sum = 0, i;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            sum = sum + (int(str[i]) - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            sum = sum - (int(str[i]) + 32);
    }
    sum = abs(sum);

    cout << isPrime(sum) << endl;
}