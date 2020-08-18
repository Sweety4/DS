#include<iostream>
using namespace std;

class Graph
{
	int **graph;
	int vertex;
public:
	Graph();
	Graph(int);
	void Accept();
	void Display();
	void InDegree();
	void OutDegree();
	void DFS(int);
	void TravDFS(int*, int);
};