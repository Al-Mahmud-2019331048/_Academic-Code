#include <bits/stdc++.h>
using namespace std;

int x;

void DFS(int node, int count, bool vis[],int& MaxElement, list<int>* graph)
{
	vis[node] = true;
	count++;
	for (auto i = graph[node].begin(); i != graph[node].end(); ++i) {
		if (!vis[*i]) {
			if (count >= MaxElement) {
				MaxElement = count;
				x = *i;
			}
			DFS(*i, count, vis, MaxElement, graph);
		}
	}
}

void DFS_Manipulation(int node, int n, list<int>* graph, int& MaxElement)
{
	bool vis[n + 1];
	int count = 0;

	for (int i = 1; i <= n; ++i)
		vis[i] = false;

	DFS(node, count + 1, vis, MaxElement, graph);
}

int diameter(list<int>* graph, int n)
{
	int MaxElement = INT_MIN;
	DFS_Manipulation(1, n, graph, MaxElement);
	DFS_Manipulation(x, n, graph, MaxElement);

	return MaxElement;
}

int main()
{
	int nodes,edges,x,y;
	cin>>nodes>>edges;
	list<int>* graph = new list<int>[nodes + 1];
	for (int i = 0; i < edges; ++i)
	{
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	cout << "Diameter of the tree is : "<< diameter(graph, nodes) << endl;
	return 0;
}
