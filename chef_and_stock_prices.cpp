#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float s, a, b, c, ans;
        cin >> s >> a >> b >> c;
        ans = s + ((s*c)/100);
        if(ans>=a && ans<=b) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}