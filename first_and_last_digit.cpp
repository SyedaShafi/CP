#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, last_digit, first_digit;
        cin>>n;
        last_digit = n%10;
        while (n!=0){
            first_digit = n%10;
            n=n/10;
        }

        cout << first_digit + last_digit << "\n";
    }
    return 0;
}