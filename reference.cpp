#include<iostream>
using namespace std;
void work(int& x)
{
    x++;
}
int main()
{
    int a=10;
    int &b=a;
    int m=12;
    b = m;

    cout<<a<<" "<<b<<"\n";
    work(a);
    cout<<a<<" "<<b<<"\n";



}
