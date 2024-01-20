#include<bits/stdc++.h>
using namespace std;
#define sz 1000

vector<int>adj[sz];
int indeg[sz]={0};

vector<int> Toposort(int n)
{
    queue<int>q;
    vector<int> res;
    for(int i=0;i<n;i++)
        if(indeg[i]==0) q.push(i);
    if(q.empty()) return res;
    int x;
    while(!q.empty()){
        x=q.front();
        q.pop();
        res.push_back(x);
        for(int i=0;i<adj[x].size();i++)
            if(--indeg[adj[x][i]]==0)
                q.push(adj[x][i]);
    }
    return res;
}

int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        cin>>x>>y;
        //directed graph, no cycle
        adj[x].push_back(y);
        indeg[y]++;
    }
    vector<int> ans=Toposort(nodes);
    for(auto x : ans)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}
