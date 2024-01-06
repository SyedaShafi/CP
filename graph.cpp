#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 1;
vector<int> edges[N];
int main()
{
    int numNodes, numEdges, a, b;
    cin >> numNodes >> numEdges;
    for (int i = 1; i <= numEdges; i++)
    {
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    // printing all nodes with their connected nodes
    for (int i = 1; i <= numNodes; i++)
    {
        cout << "Node : " << i << " :";
        for (auto ele : edges[i])
            cout << ele << " ";
        cout << "\n";
    }
    // degree
    for (int i = 1; i <= numNodes; i++)
    {
        cout << edges[i].size() << " ";
    }
    cout << "\n";
}
