/*

  Construct a minimal DFA, which accepts set of all strings  over
 {0, 1}, which when interpreted as binary number is divisible by ‘3’.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ch, state;
    char state_0 = 'A'; // which is final state ; divisible by 3==0
    char state_1 = 'B'; // divisible by 3 == 1
    char state_2 = 'C'; // divisible by 3 == 2
    state = state_0;    // initial state
    int i = 0;

    while (s[i] != '\0')
    {
        ch = s[i];
        if (state == state_0 and ch == '0')
            state = state_0;
        else if (state == state_0 and ch == '1')
            state = state_1;
        else if (state == state_1 and ch == '0')
            state = state_2;
        else if (state == state_1 and ch == '1')
            state = state_0;
        else if (state == state_2 and ch == '0')
            state = state_1;
        else if (state == state_2 and ch == '1')
            state = state_2;
        i++;
    }
    cout << state << ' ';
    if (state == state_0)
        cout << "Divisible by 3" << endl;
    else
        cout << "NOT Divisible by 3" << endl;
    return 0;
}
