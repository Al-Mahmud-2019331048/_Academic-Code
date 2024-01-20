#include<iostream>
#include<vector>
#define sz 1000
using namespace std;

vector <int> graph[sz];
bool visited[sz];

void dfs(int source)
{
    visited[source]=1;
    for(int i=0;i<graph[source].size();i++){
        int next=graph[source][i];
        if(visited[next]==0)
            dfs(next);
    }
}


int main()
{
    int nodes,edges,m,n;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        cin>>m>>n;
        graph[m].push_back(n);
        graph[n].push_back(m);

    }
    dfs(0);

    for(int i=0;i<nodes;i++){
        if(visited[i]==1)
            cout<<"Node "<<i<<" is visited"<<endl;
        else
            cout<<"Node "<<i<<" is not visited"<<endl;
    }

    return 0;
}
