#include<bits/stdc++.h>
#define sz 1000
using namespace std;

vector<int>result;  //toposort result
vector <int> graph[sz];
bool visited[sz];

void dfs(int source)
{
    visited[source]=1;
    for(int i=0;i<graph[source].size();i++){
        int next=graph[source][i];
        if(visited[next]==0)
            dfs(next);       //recursively called
    }
    //all children explored of source node
    result.push_back(source);
}


int main()
{
    int nodes,edges,m,n;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        cin>>m>>n;
        graph[m].push_back(n); //directed graph

    }
    for(int i=1;i<=nodes;i++){
        if(visited[i]==0)
            dfs(i); //if unvisited ,then call dfs
    }

    reverse(result.begin(),result.end());
    cout<<"Topological Order:";

    for(int i=0;i<result.size();i++)
            cout<<result[i]<<' ';
    cout<<endl;

    return 0;
}
