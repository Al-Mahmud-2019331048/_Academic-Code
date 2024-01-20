#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int> adj[mxn];

int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }




}