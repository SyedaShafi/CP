#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int x1, p1, x2, p2, num1, num2, mn, diff;

        cin>>x1>>p1;
        cin>>x2>>p2;

        mn = min(p1, p2);
        p1 -= mn;
        p2 -= mn;

        num1 = x1 * pow(10, p1);
        num2 = x2 * pow(10, p2);

        diff = num1- num2;

        if(diff > 0) cout<<">\n";
        else if(diff < 0) cout<<"<\n";
        else if(diff == 0) cout << "=\n";
    }
    return 0;
}
