#include <bits/stdc++.h>
using namespace std;

int heuristic_value(int state[])
{
    int h = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == j)
                continue;
            if (state[i] == state[j] || abs(state[i] - state[j]) == abs(i - j))
            {
                h++;
            }
        }
    }
    return h;
}

void print_board(int state[])
{
    // cout << " ";
    // for (int i = 1; i <= 8; i++)
    //     cout << i << " ";
    // cout << "\n";
    for (int i = 0; i < 8; i++)
    {
        // cout << i + 1 << " ";
        for (int j = 0; j < 8; j++)
        {
            if (state[j] == i + 1)
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << "\n";
    }
}

int main()
{
    int initial_state[] = {4, 3, 6, 2, 5, 4, 7, 3};
    int current_state[8];
    memcpy(current_state, initial_state, sizeof(initial_state));

    int current_h = heuristic_value(current_state);
    cout << "Current Heuristic value :";
    cout << current_h << endl;
    print_board(current_state);

    while (current_h != 0)
    {
        int min_h = INT_MAX;
        int best_move[8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                int new_state[8];
                memcpy(new_state, current_state, sizeof(current_state));
                new_state[i] = j;
                int new_h = heuristic_value(new_state);
                if (new_h < min_h)
                {
                    min_h = new_h;
                    memcpy(best_move, new_state, sizeof(new_state));
                }
                cout << "Current Heuristic value :";
                cout << current_h << endl;
                print_board(new_state);
            }
        }
        if (min_h >= current_h)
            break;
        memcpy(current_state, best_move, sizeof(best_move));
        current_h = min_h;
        cout << "Current Heuristic value :";
        cout << current_h << endl;
        print_board(current_state);
    }
    cout << "Local minimum value: " << current_h << "\n";
    print_board(current_state);
    return 0;
}
