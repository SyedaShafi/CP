#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n, m;
        cin>>n;
        m=2*n;
        int a[m],a1[m], j, k, i;
        for(i=0; i<m; i++){
            cin>>a[i];
        }
        j = n;
        k = 0;
        sort(a, a+m);

        for(i=0; i<m; i++){
            if(i%2 == 0 && j<m){
             a1[i] = a[j];
             j++;
            }

            else if(i%2 !=0 && k<n){
                a1[i] = a[k];
                k++;
            }
        }

        for(i=0; i<m; i++){
            cout<<a1[i]<<" ";
        }
        cout<<"\n";

    }
}
