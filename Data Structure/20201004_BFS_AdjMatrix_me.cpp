#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool vis[100];

void bfs(int st, int end)
{
	int u;
	queue<int>q;
	q.push(st);
	vis[st] = 1;
	//cout<<st<<endl;
	while (!q.empty()) {
		u = q.front();
		//cout << u << endl;
		q.pop();
		
		for (int i = 0; i < adj[u].size(); ++i)
		{
			if (vis[adj[u][i]]==0) {
				q.push(adj[u][i]);
				//cout << adj[u][i] << endl;
				vis[adj[u][i]] = 1;
			}

		}


	}
}


int main()
{
	int nodes, edges, x, y;

	cin >> nodes >> edges;
	for (int i = 0; i < edges; ++i)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);

	}

	bfs(1,5);

	return  0;
}