#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll> > edge[27] ;

ll eu_dist[27];
ll node_dist[27][27];

ll eucledian_dist(ll x1 , ll y1 , ll x2 , ll y2)
{
    ll x = abs(x2-x1); x*=x;
    ll y = abs(y2-y1); y*=y;
    ll root = sqrt(x+y);
    return root*50;
}


void Bfs()
{
    priority_queue<pair<ll,ll> > pq ; //cost , node
    ll start =  'S'-'A' ;
    ll goal =  'D'-'A' ;
    pq.push({-eu_dist[start] , start});
    ll res = 0;
    ll vis[27]; for(ll i= 0 ; i<27 ; i++) vis[i] = -1;
    vis[start] = -2;
    while(pq.empty()==false)
    {
        ll cost = pq.top().first;
        ll node = pq.top().second;
        cost += eu_dist[node];
        pq.pop();
        //cout<<"Node:"<<node<<"   "<<"Cost:"<<cost<<endl;
        if(node == goal)
        {
            break;
        }
        for( auto &[x,y] : edge[node])
        {
            if(vis[x]!=-1) continue ;
            ll cur_cost = cost +  y + eu_dist[x];
            vis[x] = node ;
            pq.push({-cur_cost , x});
        }
    }

    vector<ll>vct;
    ll ind = vis[goal];
    vct.push_back(goal);
    while(ind!=-2)
    {
        vct.push_back(ind);
        ind = vis[ind] ;
    }
    reverse(vct.begin() , vct.end());
    for(ll i=1 ; i<vct.size() ; i++) res+=node_dist[vct[i]][vct[i-1]];


    cout<<"Cost:"<<res<<endl;
    cout<<"Path: ";
    for(auto x:vct)
    {
        char ch = (char)x +' A' ;
        cout<<ch<<" ";
    }
    cout<<endl;
}


void GBfs()
{
    priority_queue<pair<ll,ll> > pq ; //cost , node
    ll start =  'S'-'A' ;
    ll goal =  'D'-'A' ;
    pq.push({-eu_dist[start] , start});
    ll res = 0;
    ll vis[27]; for(ll i= 0 ; i<27 ; i++) vis[i] = -1;
    vis[start] = -2;
    while(pq.empty()==false)
    {
        ll cost = pq.top().first;
        ll node = pq.top().second;
        cost += eu_dist[node];
        pq.pop();
        //cout<<"Node:"<<node<<"   "<<"Cost:"<<cost<<endl;
        if(node == goal)
        {
            break;
        }
        for( auto &[x,y] : edge[node])
        {
            if(vis[x]!=-1) continue ;
            ll cur_cost = cost +  0 + eu_dist[x];
            vis[x] = node ;
            pq.push({-cur_cost , x});
        }
    }

    vector<ll>vct;
    ll ind = vis[goal];
    vct.push_back(goal);
    while(ind!=-2)
    {
        vct.push_back(ind);
        ind = vis[ind] ;
    }
    reverse(vct.begin() , vct.end());
    for(ll i=0 ; i<vct.size() ; i++) res+=eu_dist[vct[i]];

    cout<<"Cost:"<<res<<endl;
    cout<<"Path: ";
    for(auto x:vct)
    {
        char ch = (char)x +' A' ;
        cout<<ch<<" ";
    }
    cout<<endl<<endl;
}


int main()
{

    ll n ; cin>>n; //15
    for(ll i=1 ; i<=n ; i++)
    {
        char ch ; cin>>ch;
        ll x, y ; cin>>x>>y;
        ll val = ch-'A';
        eu_dist[val] = eucledian_dist(x,y,2,11);
    }

    ll m ; cin>>m; //19
    for(ll i=1 ; i<=m ; i++)
    {
        char ch1,ch2 ; cin>>ch1>>ch2;
        ll cost ; cin>>cost;
        ll x = ch1 -'A';
        ll y = ch2 -'A';
        edge[x].push_back({y,cost});
        edge[y].push_back({x,cost});
        node_dist[x][y]=cost;
        node_dist[y][x]=cost;
    }

    cout<<endl<<"Greedy BFS :"<<endl; GBfs() ;
    cout<<endl<<"A* Search :"<<endl; Bfs();


   return 0;
}


//---------------------------------------------------------------------------
/* input
15
A 9 1
B 4 2
C 8 5
D 2 11
E 11 7
F 6 6
G 2 4
H 8 9
I 6 10
J 10 12
K 3 8
L 1 9
M 1 12
N 5 4
S 7 2

19
S A 20
S B 30
S C 30
A E 60
B G 30
C N 50
N F 40
G K 50
F I 50
K I 50
K L 30
L D 30
D M 20
J D 100
H D 90
E H 50
E J 60
N K 60
C E 30




*/
//--------------------------------------------------------------------------
