#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
void print_binary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1); // shift the i'th bit of n to the 0'th place ;
    }
    cout << "\n";
}
int main()
{
    //    BIT MASKING;
    


    // ********************** power of XOR **************************

    // *******************************swap two number******************************
    // int a = 4;
    // int b = 6;

    // a = a ^ b;
    // b = b ^ a; // b = b^(a^b) ==> a^b^b = a
    // a = a ^ b; // a = (a^b)^a ==> a^a^b = b

    // ************* 6) ckeck power of 2;***********
    // int n = 12;
    // if (n & (n - 1))
    //     cout << "Not power of 2\n";
    // else
    //     cout << "Power of 2\n";

    // *********** 5) clear msb **********

    // int a = 59;
    // int i = 4;
    // int b = a & ((1 << i) - 1);
    // print_binary(b);

    // *********** 4) clear LSB ***********

    // int a = 59;
    // print_binary(a);
    // int i = 4; // clear lsb till the 4th bit
    // int b = a & (~((1 << (i + 1)) - 1));
    // print_binary(b);

    // ************* 3) Uppercase to lower case and vice versa ************

    // according to the pattern 5'th bit is set in case of lower case letter
    // and unset in case of upper case letter
    // check lower case or uppercase letter
    // char temp = 'L';
    // if ((temp >> 5) & 1)
    //     cout << "lowercase  letter\n";
    // else
    //     cout << "Uppercase letter\n";

    // // upper to lower
    // char temp;
    // for (char i = 'A'; i <= 'E'; i++)
    // {

    //     // temp = (i | (1 << 5)); //(1<<5) holo space( ) ar ascii value
    //     temp = i | ' ';
    //     cout << temp << " ";
    // }
    // cout << "\n";
    // // lower to upper
    // for (char i = 'a'; i <= 'e'; i++)
    // {
    //     // temp = i & (~(1 << 5));//(~(1<<5)) holo '_' ar soman
    //     temp = i & '_';
    //     cout << temp << " ";
    // }

    // ********* 1) A number is odd or even *********

    // for (int i = 0; i < 8; i++)
    //     print_binary(i);
    // int a = 5;
    // if (a & 1)
    //     cout << "Number is odd\n";
    // else
    //     cout << "Number is even\n";

    // ******** 2) multiply by 2 and divide by 2 *********

    // cout<<(11<<1);//left shift by 1 means multiply by 2
    // cout << (11 >> 1); // right shift by 1 means divide by 2

    // ************set and unset bit**********

    // printBinary(9);
    // int a = 9;
    // int i = 6;

    // ***********checking wheather the i'th bit is set or undset**********

    // if (a & (1 << i))
    //     cout << "Set bit\n";
    // else
    //     cout << "unset bit\n";

    // *********set the i'th bit;**********

    // a |= (1 << i);
    // printBinary(a);

    // *********unset the i'th bit********

    // a &= (~(1 << i));
    // printBinary(a);

    // **********toggle************

    // a = a ^ (1 << i);
    // printBinary(a);

    // *********number of set bits*********

    // using built in function

    // cout << __builtin_popcount(a) << "\n";      // works for int
    // cout << __builtin_popcountll(1e15) << "\n"; // for ll numbers

    // int cnt = 0;
    // for (int i = 31; i >= 0; i--)
    // {
    //     if (a & (1 << i))
    //         cnt++;
    // }
    // cout << cnt << "\n";

    // we can also do
    // for (int i = 31; i >= 0; i--)
    // {
    //     // here the i'th bit is shifting at the 0'th position and do and(&) operation with 1;
    //     if ((a >> i) & 1)
    //         cnt++;
    // }
}