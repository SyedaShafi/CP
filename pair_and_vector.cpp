#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    p = make_pair(2, "abs");
    p = {2, "abs"};
    // cout << p.first << " " << p.second << endl;

    pair<int, int> p_array[3];
    p_array[0] = make_pair(1, 2);
    p_array[1] = make_pair(2, 3);
    p_array[2] = make_pair(3, 4);

    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}