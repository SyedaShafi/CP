// Q7 10 only at last position
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char state_A = 'A';
    char state_B = 'B';
    char state_C = 'C';
    char state_D = 'D';
    char current_state = state_A;
    char final_state = state_C;

    string s;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (current_state == state_D)
            current_state = state_D;
        else if (current_state == state_A and s[i] == '0')
            current_state = state_A;
        else if (current_state == state_A and s[i] == '1')
            current_state = state_B;
        else if (current_state == state_B and s[i] == '0')
            current_state = state_C;
        else if (current_state == state_B and s[i] == '1')
            current_state = state_B;
        else if (current_state == state_C and (s[i] == '1' or s[i] == '0'))
            current_state = state_D;
    }
    cout << current_state << endl;
    if (current_state == final_state)
        cout << "Accepted " << endl;
    else
        cout << "Rejected " << endl;

    return 0;
}