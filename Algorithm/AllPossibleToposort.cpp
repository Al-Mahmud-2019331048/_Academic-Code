#include<bits/stdc++.h>
using namespace std;
#define sz 1000

vector <int> adj[sz];
int indeg[sz];
bool vis[sz];
int nodes,edges;
vector <int> ans;


void toposort()
{
    //Works done!
    if(ans.size()==nodes)
    {
        for(int i=0;i<nodes;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }

    //main code
    for(int i=0;i<nodes;i++)
    {
        if(indeg[i]!=0 || vis[i])
            continue;

        vis[i] = true;
        ans.push_back(i);

        for(int j=0;j<adj[i].size();j++)
            indeg[adj[i][j]]--;

        toposort();

        vis[i] = false;
        ans.pop_back();

        for(int j=0;j<adj[i].size();j++)
            indeg[adj[i][j]]++;
    }
}

int main()
{
    int i;
    cin>>nodes>>edges;

    for(i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    toposort();

}

// headphone lgai nai mama...
// headphone lagaaa baal/// headphone nai ekhon

    
/*
8 14
7 6
0 2
0 4
4 1
0 3
3 6
1 2
1 3
4 6
2 3
5 6
5 2
5 4
7 5 

*/
