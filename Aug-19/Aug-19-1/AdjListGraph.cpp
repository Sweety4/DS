#include"AdjListGraph.h"
#include<list>
#include<queue>
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
	cout << "\n\n************** DFS Is *************\n\n";
	int *vis = new int[ver];
	for (int i = 0; i < ver; i++)
		vis[i]=0;
	TravDFS(st, vis);
}
void Graph::TravDFS(int st, int*vis)
{
	vis[st] = 1;
	cout << " " << st;
	list<int>::iterator itr;
	for (itr = graph[st].begin(); itr != graph[st].end(); itr++)
	{
		if (!vis[*itr])
		{
			TravDFS(*itr, vis);
		}
	}

}

void Graph::BFS(int st)
{
	int temp, no;
	list<int> queue;
	vis = new int[ver];

	for (int i = 0; i < ver; i++)
		vis[i] = 0;

	vis[st] = 1;
	queue.push_back(st);
	cout << " \n\n******** BFS Is ************\n\n ";
	list<int>::iterator i;

	while (!queue.empty())
	{
		int temp = queue.front();
		cout << " " << temp;
		queue.pop_front();

		for (i = graph[temp].begin(); i != graph[temp].end(); ++i)
		{
			int no = *i;
			if (!vis[no])
			{
				vis[no] = true;
				queue.push_back(no);
			}
		}
	}
}