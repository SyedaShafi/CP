#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 30;
typedef pair<int, char> pii;

vector<pii> graph[N];
vector<int> grid[N];
bool vis[N];
int cost = 0;
int city_count = 0;
vector<char> path;

int distance(int xi, int yi,int xj, int yj){
    int ans = sqrt(((xi-xj)*(xi-xj)) + ((yi - yj) * (yi - yj)));
    return ans;
}
int find_h(char u){
    int w = 0;
    for(char i = 'A'; i<='Z'; i++){
        if(i == u)
        {
            w = grid[i][0];
            break;
        }
    }
    return w;
}
void gbfs(char node){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({distance(2, 11, 7, 2), node});
    vis[node] = true;
    while(!pq.empty()){
        pii pr = pq.top();
        pq.pop();
        char u = pr.second;
        int w = find_h(u);
        vis[u] = true;
        cost+=w;
        if(u == 'D') return;
        for(auto ele:graph[u]){
            char nnode = ele.second;
            int nw = find_h(nnode);
            if(!vis[nnode]){
                city_count++;
                path.push_back(u);
                pq.push({nw, nnode});
            }
        }
    }
}

void a_star(char node){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({distance(2, 4, 7, 2) + 0, node});
    vis[node] = true;
    while(!pq.empty()){
        pii pr = pq.top();
        char u = pr.second;
        int w = find_h(u) + pr.first;
        city_count++;
        vis[u] = true;
        cost+=w;

        while (!pq.empty()) {
            if(pq.top().second == 'G'){
                path.push_back('G');
                return;
            }
            pq.pop();
        }
        path.push_back(u);

        for(auto ele:graph[u]){
            char nnode = ele.second;
            int nw = find_h(nnode) + ele.first;
            cout<<u<<" "<<nnode<<": ";
            cout<<nw<<"\n";
            if(!vis[nnode]){
                pq.push({nw, nnode});
            }
        }
    }
}

int main()
{

    graph['S'].push_back({20, 'A'});
    graph['A'].push_back({20, 'S'});

    graph['S'].push_back({30, 'B'});
    graph['B'].push_back({30, 'S'});

    graph['S'].push_back({30, 'C'});
    graph['C'].push_back({30, 'S'});

    graph['A'].push_back({60, 'E'});
    graph['E'].push_back({60, 'A'});

    graph['B'].push_back({30, 'G'});
    graph['G'].push_back({30, 'B'});

    graph['C'].push_back({50, 'N'});
    graph['N'].push_back({50, 'C'});

    graph['N'].push_back({40, 'F'});
    graph['F'].push_back({40, 'N'});

    graph['G'].push_back({50, 'K'});
    graph['K'].push_back({50, 'G'});

    graph['F'].push_back({50, 'I'});
    graph['I'].push_back({50, 'F'});

    graph['K'].push_back({50, 'I'});
    graph['I'].push_back({50, 'K'});

    graph['K'].push_back({30, 'L'});
    graph['L'].push_back({30, 'K'});

    graph['L'].push_back({30, 'D'});
    graph['D'].push_back({30, 'L'});

    graph['D'].push_back({20, 'M'});
    graph['M'].push_back({20, 'D'});

    graph['J'].push_back({100, 'D'});
    graph['D'].push_back({100, 'J'});

    graph['H'].push_back({90, 'D'});
    graph['D'].push_back({90, 'H'});

    graph['E'].push_back({50, 'H'});
    graph['H'].push_back({50, 'E'});

    graph['E'].push_back({60, 'J'});
    graph['J'].push_back({60, 'E'});

    graph['N'].push_back({60, 'K'});
    graph['K'].push_back({60, 'N'});

    graph['C'].push_back({30, 'E'});
    graph['E'].push_back({30, 'C'});

    grid['S'].push_back(distance(2, 4, 7, 2));
    grid['A'].push_back(distance(2, 4, 9, 1));
    grid['B'].push_back(distance(2, 4, 4, 2));
    grid['C'].push_back(distance(2, 4, 8, 5));
    grid['D'].push_back(distance(2, 4, 2, 11));
    grid['E'].push_back(distance(2, 4, 11, 7));
    grid['F'].push_back(distance(2, 4, 6, 6));
    grid['G'].push_back(distance(2, 4, 2, 4));
    grid['H'].push_back(distance(2, 4, 8, 9));
    grid['I'].push_back(distance(2, 4, 6, 10));
    grid['J'].push_back(distance(2, 4, 10, 12));
    grid['K'].push_back(distance(2, 4, 3, 8));
    grid['L'].push_back(distance(2, 4, 1, 9));
    grid['M'].push_back(distance(2, 4, 1, 12));
    grid['N'].push_back(distance(2, 4, 5, 4));
    /*
    for(char i = 'A'; i<='Z'; i++){
       cout<< grid[i][0] <<" ";
    }
    */
    gbfs('S');

    //a_star('S');

    cout<<"Cost : "<<cost<<"\n";
    cout<<"City Count : "<<city_count<<"\n";
    for(auto ele: path){
        cout<<ele<<" ";
    }
}
