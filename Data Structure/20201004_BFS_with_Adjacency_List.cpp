#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define sz 1000
using namespace std;

vector<int>adj[sz];
bool vis[sz];
int par[sz];


int bfs(int start, int d)
{
    queue< pair<int,int> >q;
    q.push({start,0});
    vis[start]=true;
    int node, cost, next;
    while(!q.empty())
    {
        node = q.front().first;
        cost = q.front().second;
        q.pop();
        if(node==d) return cost; //destination

        for (int i = 0; i < adj[node].size(); i++)
        {
            next = adj[node][i];
            if(vis[next]) continue;
            q.push({next,cost+1});
            vis[next] = true;
            par[next] = node;
        }
    }
    return -1;
}

void init(int n)
{
    for (int i = 0; i < n; i++)
        par[i] = -1;  //ith having no parents
}

int main()
{
   int n, m, x, y, w;
    cin >> n >> m;
    init(n);
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"Enter SOURCE and DESTINATION"<<endl;

    cin >> x >> y;
    
    w = bfs(x,y);
    if(~w)  //w != -1
    {
        cout << "Minimum Cost from "<< x << " to " << y <<" Using BFS = " << w << endl;
        vector<int>path;

        while(~y) //y!=-1
        {
            path.push_back(y);
            y = par[y];
        }

        reverse(path.begin(), path.end());
        for(int i = 0; i < path.size(); i++)
            cout << path[i] << ",\n"[i==path.size()-1];
    }
    else cout << "There is no path between "<< x << " to " << y << endl;
}

/**
6 8
5 2
1 3
4 0
3 4
0 2
5 0
0 1
0 3
5 3

4 4
0 1
2 0
1 2
3 1

*/
