#include<bits/stdc++.h>
using namespace std;
#define sz 1000

vector<int>adj[sz];
int indeg[sz]= {0};

void lex_short_Toposort(int n)
{
    multiset<int> s;
    for(int i=0; i<n; i++)
    {
        if(indeg[i]==0)
            s.insert(i);
    }
    int cnt=0;
    vector<int> res;
    while(!s.empty())
    {
        int u=*s.begin();
        s.erase(s.begin());
        res.push_back(u);

        for(auto x:adj[u])
        {
            if(--indeg[x]==0)
                s.insert(x);
        }
        cnt++;
    }
    if(cnt!=n)
        return;

    for(auto x : res)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>x>>y;
        //directed graph, no cycle
        adj[x].push_back(y);
        indeg[y]++;
    }
    lex_short_Toposort(nodes);
    return 0;
}
