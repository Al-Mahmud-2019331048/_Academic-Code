#include<bits/stdc++.h>
using namespace std;
#define sz 1000
#define inf (1<<29)

vector<int> adj[sz], w[sz];
int cost[sz], par[sz];

int Bellman_Ford(int st, int en, int n)
{
	cost[st] = 0;
	for (int k = 1; k < n; ++k)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = 0; j < adj[i].size(); ++j)
			{
				if (cost[i] + w[i][j] < cost[adj[i][j]]) {
					cost[adj[i][j]] = cost[i] + w[i][j];
					par[adj[i][j]] = i;
				}
			}
		}
	}
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < adj[i].size(); ++j)
		{
			if (cost[i] + w[i][j] < cost[adj[i][j]]) {
				cout<<"Shortest path could not be determined\nNegative Cycle Detected"<<endl;
				return -inf;
			}
		}
	}
	return cost[en];
}


void init(int n)
{
	for (int i = 0; i < n; ++i)
	{
		par[i] = -1; cost[i] = inf;
	}
}


int main()
{
	int nodes, edges, x, y, z;
	cin >> nodes >> edges;

	init(nodes);

	for (int i = 0; i < edges; ++i)
	{
		cin >> x >> y >> z;
		adj[x].push_back(y);  //adj[x] er i th index e y
		w[x].push_back(z);  //w[x] er i th index e x->y er weight
	}

	int st, en;
	cin >> st >> en;
	x = Bellman_Ford(st, en, nodes);

	if(x!=-inf){
		cout<<"The cost of shortest path from "<<st<<" to "<<en<<" is: "<<x<<endl;

		vector<int>res;
		x=en;
		while(~x){
			res.push_back(x);
			x=par[x];
		}
		reverse(res.begin(),res.end());
		for(auto x: res)
			cout<<x<<" ";
		cout<<endl;
	}




	return 0;
}


/*

//weighted graph
7 10
0 2 1
0 3 6
1 5 1
3 1 2
1 6 5
2 5 8
2 3 2
4 5 9
4 5 2
6 4 1
0 6


//negative edge
6 10
0 1 3
0 2 -2
0 4 8
2 3 6
1 2 1
1 5 4
1 4 6
4 5 -5
3 5 -5
3 1 9
0 5


//negative cycle
6 10
0 1 3
0 2 -2
0 4 8
2 3 6
1 2 1
1 5 4
1 4 6
4 5 -5
3 5 -5
3 1 -9
0 5
*/