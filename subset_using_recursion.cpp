#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
void solve(string in, string out)
{
    string ans = out;
    if (in.size() == 0)
    {
        cout << ans << " ";
        return;
    }

    string ans1 = ans;
    string ans2 = ans;
    ans2.push_back(in[0]);
    in.erase(in.begin() + 0);
    solve(in, ans1);
    solve(in, ans2);
}
int main()
{
    string s;
    cin >> s;
    string output = " ";
    solve(s, output);
}