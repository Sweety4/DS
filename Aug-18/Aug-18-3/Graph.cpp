#include"Graph.h"
#include<list>
Graph::Graph()
{
	vertex = 5;
	graph = new int*[vertex];

	for (int i = 0; i < vertex; i++)
	{
		graph[i] = new int[vertex];
	}

}
Graph::Graph(int v)
{
	vertex = v;
	graph = new int*[vertex];

	for (int i = 0; i < vertex; i++)
	{
		graph[i] = new int[vertex];
	}

}
void Graph::Accept()
{
	int i, j;
	cout << "\n\n\t Enter value for graph ";
	for (i = 0; i < vertex; i++)
	{
		for (j = 0; j < vertex; j++)
		{
			cout << "\n\n\t Enter Adjacancy for " << i << "To" << j << "(0/1)";
			cin >> graph[i][j];
		}
	}
}
void Graph::Display()
{
	int i, j;
	cout << "\n\n\t ********* Graph Is ***************";
	for (i = 0; i < vertex; i++)
	{
		cout << "\n\n";
		for (j = 0; j < vertex; j++)
			cout << "t"<<graph[i][j];
	}

}
void Graph::InDegree()
{
	int i, j, id;
	for (i = 0; i < vertex; i++)
	{
		id = 0;
		for (j = 0; j < vertex; j++)
		{
			if (graph[j][i] == 1)
				id++;
		}
		cout << "\n\n\t InDegree of " << i << "is" << id;
	}
}
void Graph::OutDegree()
{
	int i, j, ot;
	for (i = 0; i < vertex; i++)
	{
		ot = 0;
		for (j = 0; j < vertex; j++)
		{
			if (graph[i][j] == 1)
				ot++;
		}
		cout << "\n\n\t OutDegree of " << i << "is" << ot;
	}
}

void Graph::DFS(int st)
{
	int *visited;
	visited = new int[vertex];
	for (int i = 0; i < vertex; i++)
		visited[i] = 0;
	cout << "\n\n\t DES traversal is :" << st;
	visited[st] = 1;
	TravDFS(visited, st);

}

void Graph::TravDFS(int *v, int st)
{
	int j;
	for (j = 0; j < vertex; ++j)
	{
		if (graph[st][j] == 1 && v[j] == 0)
		{
			v[j] = 1;
			cout << " " << j;
			TravDFS(v, j);
		}
	}
}

void Graph::BFS(int st)
{

	
	int *visited = new int[vertex];
	int i;
	for (i = 0; i < vertex; i++)
		visited[i] = 0;

	list<int> queue;

	
	visited[st] = 1;
	queue.push_back(st);

	while (!queue.empty())
	{
		
		st = queue.front();
		cout << st << " ";
		queue.pop_front();

		for (i = 0; i < vertex; i++)
		{
			
			if (graph[st][i] == 1 && visited[i] == 0)
			{
				visited[i] = 1;
				queue.push_back(i);
			}
		}
	}
}
