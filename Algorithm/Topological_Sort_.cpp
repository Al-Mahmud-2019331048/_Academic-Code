#include<bits/stdc++.h>
using namespace std;
#define sz 1000

int indeg[sz];
vector<int>adj[sz];

vector<int> toposort(int n)
{
    queue<int>q;
    for(int i=0; i<n; i++)
    {
        if(indeg[i]==0)
            q.push(i);
    }

    vector<int>res;
	if(q.empty()) return res;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        res.push_back(u);
        for(int i=0; i<adj[u].size(); i++)
        {
            if(--indeg[adj[u][i]]==0)
                q.push(adj[u][i]);
        }

    }
    return res;
}



int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    vector<int> ans;
    ans=toposort(nodes);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;


}
