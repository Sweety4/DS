#include"AdjListGraph.h"

void main()
{
	Graph g(6);
	g.AddEdge(0, 1);
	g.AddEdge(0, 2);
	g.AddEdge(1, 3);
	g.AddEdge(2, 4);
	g.AddEdge(3, 5);
	g.AddEdge(4, 5);
	g.PrintAdjList();
	g.DFS(0);
	g.BFS(0);

	cout << "\n\n";
	
}