#include<bits/stdc++.h>
using namespace std;
#define sz 100000

vector<int>path;
vector<int> adj[sz];
bool vis[sz];

int BFS(int source,int sink)
{
	queue<int>q;
	int Parent[sz],u,cost;
	q.push(source);
	vis[source]=1;
	Parent[source]=-1;

	while(!q.empty()){
		u=q.front(); q.pop();
		for(auto now: adj[u]){
			if(!vis[now]){
				q.push(now);
				vis[now]=1;
				Parent[now]=u;
			}
		}
	}
	int cnt=0;
	u=Parent[sink];
	path.push_back(sink);
	while(u!=-1){
		cnt++;
		path.push_back(u);
		u=Parent[u];	
	}
	return cnt;
}


int main()
{
	int nodes,edges,x,y;
	cin>>nodes>>edges;
	for (int i = 0; i < edges; ++i)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	int source,sink;
	cin>>source>>sink;
	int cost=BFS(source,sink);
	cout<<"The path from node "<<source<<" to "<<sink<<" is : "<<endl;
	reverse(path.begin(),path.end());
	for(auto x: path){
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<"The cost is: "<<cost<<endl;

	return 0;
}