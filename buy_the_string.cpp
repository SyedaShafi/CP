#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c0, c1, h, num_of_ones = 0, num_of_zeros = 0;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                num_of_zeros++;
            else
                num_of_ones++;
        }
        if (c0 < c1 && num_of_ones > 0)
        {
            num_of_ones--;
            num_of_zeros++;
        }
        else if (c0 > c1 && num_of_zeros > 0)
        {
            num_of_ones++;
            num_of_zeros--;
        }
        cout << num_of_ones << " " << num_of_zeros << endl; 
        cout << (num_of_ones * c1) + (num_of_zeros * c0) << endl;
    }
}