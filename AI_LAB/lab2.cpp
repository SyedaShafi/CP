#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e3 + 1;
char graph[N][N];
bool vis[N][N];
int cost = 0;
int total_dirt = 0;
vector<pair<int, int>> direct = {{1, 0}, {0, 1},{-1, 0},{0, -1}};

void print_board(){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<"\n";
    }
}
bool is_valid(int i, int j){
    return (i>=0 and i<10 and j>=0 and j<10);
}

void dfs(int i, int j){
    vis[i][j] = true;
    cost++;
    if(graph[i][j] == 'D') total_dirt++;
    if(total_dirt == 11) return;
    for(auto ele: direct){
        int u, v;
        u = i + ele.first;
        v = j + ele.second;
        if(is_valid(u, v) and !vis[u][v]){
            if(graph[u][v] == 'D'){
                graph[u][v] = 'V';
                cout<<"\n\n";
                print_board();
            }
            graph[u][v] = '_';
            dfs(u, v);
        }
    }
}

void bfs(int i, int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    while(!q.empty()){
        pair<int, int> pr = q.front();
        q.pop();
        cost++;
        int u, v;
        u = pr.first;
        v = pr.second;
        if(graph[u][v] == 'D') total_dirt++;
        if(total_dirt == 11) return;
        for(auto ele: direct){
            int ni, nj;
            ni = u + ele.first;
            nj = v + ele.second;
            if(is_valid(ni, nj) and !vis[ni][nj]){
                if(graph[ni][nj] == 'D'){
                    graph[ni][nj] = 'V';
                    cout<<"\n\n";
                    print_board();

                }
                vis[ni][nj] = true;
                graph[ni][nj] = '_';
                q.push({ni, nj});
            }
        }
    }
}

int main()
{
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            graph[i][j] = '_';
        }
    }
    graph[0][3] = 'D';
    graph[0][9] = 'D';
    graph[1][1] = 'D';
    graph[1][5] = 'D';
    graph[3][4] = 'D';
    graph[3][8] = 'D';
    graph[5][1] = 'D';
    graph[6][7] = 'D';
    graph[8][6] = 'D';
    graph[9][2] = 'D';
    graph[9][8] = 'D';
    graph[9][0] = 'V';
    print_board();
    graph[9][0] = '_';
    dfs(9, 0);
    //bfs(9, 0);

    cout<<cost<<"\n";
}
