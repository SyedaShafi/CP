#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    float y;
    cin>>y;
    
    if(x%5==0 && x<=y-0.5){
        y = y-x-0.5;
    }else{
        y = y;
    }
    cout<<y<<endl;

}