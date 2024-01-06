// Q5 odd 0's and odd 1's
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char EE = 'A'; 
    char OE = 'B'; 
    char OO = 'C';
    char EO = 'D'; 
    char current_state = EE;
    char final_state = OO;
    string s;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {

        if (current_state == EE and s[i] == '0')
            current_state = OE;
        else if (current_state == EE and s[i] == '1')
            current_state = EO;
        else if (current_state == OE and s[i] == '0')
            current_state = EE;
        else if (current_state == OE and s[i] == '1')
            current_state = OO;
        else if (current_state == OO and s[i] == '0')
            current_state = EO;
        else if (current_state == OO and s[i] == '1')
            current_state = OE;
        else if (current_state == EO and s[i] == '0')
            current_state = OO;
        else if (current_state == EO and s[i] == '1')
            current_state = EE;
    }

    cout << current_state << ' ';
    if (current_state == final_state)
        cout << "ACCEPTED" << endl;
    else
        cout << "NOT ACCEPTED " << endl;

    return 0;
}