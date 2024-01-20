#include<bits/stdc++.h>
using namespace std;

void bfs_without_queue(int nodes, vector<int>adj[], int src, vector<int>&v, int dist[]) {
	bool vis[nodes+1];
	for (int i = 0; i < nodes; ++i)
	{
		vis[i] = 0;
		dist[i] = INT_MAX;
	}
	v.push_back(src);
	vis[src] = 1;
	dist[src] = 0;
	int i=0;
	while(i<v.size())
	{
		int u = v[i];
		for (int j = 0; j < adj[u].size(); ++j)
		{
			int k = adj[u][j];
			if (vis[k] == 0) {
				vis[k] = 1;
				dist[k] = dist[u] + 1;
				v.push_back(k);
			}
		}
		i++;
	}
}



int main()
{
	int nodes, edges, x, y,src;
	cin >> nodes >> edges;
	vector<int> adj[nodes+1];
	vector<int>v;
	int dist[nodes+1];
	for (int i = 0; i < edges; ++i)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cout<<"Enter a source node for BFS:"<<endl;
	cin>>src;
	bfs_without_queue(nodes,adj,src,v,dist);

	cout<<"BFS traversal:"<<endl;
	for (int i = 0; i < v.size(); ++i)
		cout<<v[i]<<" ";
	cout<<endl;

	return 0;
}