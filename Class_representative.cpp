#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    string s;
    set<string> st;
    while (n--)
    {
        cin >> s;
        if (s == "Parag" || s == "Ruhan")
            continue;
        st.insert(s);
    }
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == "Parag" || s == "Ruhan")
            continue;
        st.insert(s);
    }
    cout << st.size() + 2 << "\n";
}