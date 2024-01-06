#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
char grid[3][3];
void take_input()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            grid[i][j] = '_';
        }
    }
}
void print_grid()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}
bool grid_empty(){
    bool f = false;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[i][j] == '_') {
                f = true;
                break;
            }
        }
    }
    return f;
}
bool is_game(){
    bool flag = false;

    if(grid[0][0] == grid[1][1] and grid[1][1] == grid[2][2]) flag = true;
    else if(grid[0][0] == grid[0][1] and grid[0][1] == grid[0][2]) flag = true;
    else if(grid[1][0] == grid[1][1] and grid[1][1] == grid[1][2]) flag = true;
    else if(grid[2][0] == grid[2][1] and grid[2][1] == grid[2][2]) flag = true;
    else if(grid[0][2] == grid[1][1] and grid[1][1] == grid[2][0]) flag = true;
    else if(grid[0][0] == grid[1][0] and grid[1][0] == grid[2][0]) flag = true;
    else if(grid[0][1] == grid[1][1] and grid[1][1] == grid[2][1]) flag = true;
    else if(grid[0][2] == grid[1][2] and grid[1][2] == grid[2][2]) flag = true;

    return flag;
}
bool user_move(){
    int x, y;
    cout<<"Enter the row and col number(0 indexed): ";
    cin>>x>>y;
    grid[x][y] = 'X';
    return is_game();
}
bool agent_move(){

}
int main()
{
    take_input();
    print_grid();
    bool emp = false;
    while(!grid_empty()){
        bool um = user_move();
        if(um){
            print_grid();
            emp = true;
            cout<<"You Won\n";
            break;
        }
        bool am = agent_move();
        if(am){
             print_grid();
            emp = true;
            cout<<"Agent Won\n";
            break;
        }
         print_grid();
    }
    if(!emp) cout<<"Draw\n";
}
