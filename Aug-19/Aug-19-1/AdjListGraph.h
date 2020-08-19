#include<iostream>
#include<list>
using namespace std;

class Graph
{
	int ver;
	list<int>*graph;
	int *vis;
public:
	Graph();
	Graph(int);
	void AddEdge(int, int);
	void PrintAdjList();
	void DFS(int);
	void TravDFS(int, int*);
	void BFS(int);
};


