#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,s;
        cin>>a>>b>>c;
        if(a<=b && a<=c) s = a;
        else if(b<=a && b<=c) s = b;
        else if(c<=a && c<=b) s = c;
        cout<<( (a+b+c) - s )<<endl;
    }
}