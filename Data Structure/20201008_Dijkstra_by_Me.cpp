#include<bits/stdc++.h>
using namespace std;

#define sz 100
#define inf 100000

struct node
{
	int val;
	int cost;
};

vector < node > graph[sz];
bool vis[sz];
int dist[sz];

void init(){
	for (int i = 0; i < sz; ++i)
	{
		graph[i].clear();
		vis[i]=0;
		dist[i]=inf;
	}
}

/*class cmp{   //min PQ
public: 
	bool operator() (node &a ,node &b){
		if(a.cost > b.cost) return true;
		else return false;
	}
};
*/

void dijkstra(int source)
{
	//priority_queue<node,vector<node> ,cmp>PQ;			//min PQ
	priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > pq;  
	//(wrok without cmp funcion)

	PQ.push({source,0});
	while(!PQ.empty()){
		node cur=PQ.top();
		PQ.pop();
		int val=cur.val;
		int cost=cur.cost;
		if(vis[val]==1) continue;

		dist[val]=cost;
		vis[val]=1;
		for (int i = 0; i < graph[val].size(); ++i)
		{
			int next=graph[val][i].val;
			int nextCost=graph[val][i].cost;

			if(vis[next]==0){ //if unvisited
				PQ.push({next,cost+nextCost});
			}

		}

	}
}

int main()
{
	init();
	int nodes,edges;
	cin>>nodes>>edges;
	for (int i = 0; i < edges; ++i)
	{
		int u,v,w;
		cin>>u>>v>>w;
		graph[u].push_back({v,w});
	}
	int source;
	cout<<"ENter source node:"<<endl;
	cin>>source;

	dijkstra(source);

	for (int i = 1; i <= nodes; ++i)
	{
		cout<<"Node: "<<i<<" Distance: ";
		if(dist[i]==inf) cout<<"INF"<<endl;
		else  cout<<dist[i]<<endl;
	}

	return 0;
}