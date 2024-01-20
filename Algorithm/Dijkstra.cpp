#include<bits/stdc++.h>
using namespace std;
#define sz 1000

vector<int> adj[sz], weight[sz];
int par[sz], cost[sz];

int dijkstra(int st, int en)
{
	priority_queue< pair<int, int>, vector<pair<int, int> >, greater< pair<int, int> > > pq;
	pq.push({0, st});
	cost[st] = 0;
	int cur, c;
	while (!pq.empty()) {
		c = pq.top().first; //cost
		cur = pq.top().second; //current node
		pq.pop();
		for (int i = 0; i < adj[cur].size(); ++i)
		{
			int now = adj[cur][i];   //cur node er adj node
			if (c + weight[cur][i] < cost[now]) {
				cost[now] = c + weight[cur][i];
				pq.push({cost[now], now});
				par[now] = cur;
			}
		}

	}
	return cost[en];
}



void init(int n)
{
	for (int i = 0; i < n; ++i)
	{
		par[i] = -1;
		cost[i] = INT_MAX;
	}
}

int main()
{
	int nodes, edges, x, y, w;
	cin >> nodes>> edges;

	init(nodes);

	for (int i = 0; i < edges; ++i)
	{
		cin >> x >> y >> w;
		x--;y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
		weight[x].push_back(w);
		weight[y].push_back(w);
	}

	//enter start and end node
	int st, en;
	cin >> st >> en;
	cout<<st<<" "<<en<<endl;

	int path_cost = dijkstra(st-1, en-1);
	cout << "The minimum path cost from " << st << " to " << en << " is " << path_cost << endl;

	vector<int> path;
	int end=en-1;
	while(end!=-1){
		path.push_back(end+1);
		end=par[end];
	}

	reverse(path.begin(),path.end());

	cout<<"The path is:"<<endl;
	for(auto x: path)
		cout<<x<<" ";
	cout<<endl;


	return 0;
}