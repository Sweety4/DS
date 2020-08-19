#include"AdjListGraph.h"
Graph::Graph()
{
	ver = 4;
	graph = new list<int>[4];

}
Graph::Graph(int v)
{
	ver = v;
	graph = new list<int>[ver];
}
void Graph::AddEdge(int src, int dec)
{
	graph[src].push_back(dec);
}
void Graph::PrintAdjList()
{
	int i;
	list<int>::iterator itr;
	for (i = 0; i < ver; i++)
	{
		cout << "\n\n\t Adj :" << i << ":";
		for (itr = graph[i].begin(); itr != graph[i].end(); itr++)
			cout << " " << *itr;

	}
}
void Graph::DFS(int st)
{
	int *vis = new int[ver];
	for (int i = 0; i < ver; i++)
		vis[i];

	cout << "\n\n\t ************** DFS Is *************\n\n";
	vis[st] = 1;
	TravDFS(st, vis);
}
void Graph::TravDFS(int st, int*vis)
{
	vis[st] = 1;
	cout << " " << st;
	list<int>::iterator itr;
	for (itr = graph[st].begin(); itr != graph[st].end(); itr++)
	{
		if (vis[*itr] == 0)
		{
			TravDFS(*itr, vis);
		}
	}

}