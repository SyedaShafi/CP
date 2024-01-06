// Q9 divisible by 4
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char zero = '0';  // divisible 4 == 0
    char one = '1';   // divisible 4 == 1
    char two = '2';   // divisible 4 == 2
    char three = '3'; // divisible 4 == 3

    char final_state = zero;
    char current_state = zero;
    string s;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (current_state == zero and s[i] == '0')
            current_state = zero;
        else if (current_state == zero and s[i] == '1')
            current_state = one;
        else if (current_state == one and s[i] == '0')
            current_state = two;
        else if (current_state == one and s[i] == '1')
            current_state = three;
        else if (current_state == two and s[i] == '0')
            current_state = zero;
        else if (current_state == two and s[i] == '1')
            current_state = one;
        else if (current_state == three and s[i] == '0')
            current_state = two;
        else if (current_state == three and s[i] == '1')
            current_state = three;
    }

    cout << current_state << endl;
    if (current_state == final_state)
        cout << "Divisible by 4" << endl;
    else
        cout << "It's not divisible by 4" << endl;
}