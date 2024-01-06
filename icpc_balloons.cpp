#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i, num=0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1 || a[i] == 2 || a[i] == 3 
            || a[i] == 4 || a[i] == 5 || a[i] == 6 || a[i] == 7){
                num = i;
            }
            
        }
        cout<<num + 1 <<endl;
    }
}