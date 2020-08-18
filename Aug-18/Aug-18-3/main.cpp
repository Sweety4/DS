#include"Graph.h"

void main()
{
	int vertex,ch,no;
	cout << "\n\n\t Enter No. of vertex ";
	cin >> vertex;
	Graph g(vertex);
	do
	{
		cout << "\n\n\t\t1. Accept\
                \n\t\t2.Display graph\
                 \n\t\t3.InDegree\
                  \n\t\t4.OutDegree\
                   \n\t\t5.DFS\
                    \n\t\t0.Exit\
                    \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			g.Accept();
			break;
		case 2:
			g.Display();
			break;
		case 3:
			g.InDegree();
			break;
		case 4:
			g.OutDegree();
			break;
		case 5:
			cout << "\n\n\t Enter starting Index ";
			cin >> no;
			g.DFS(no);
			break;
		default:
			cout << "\n\n\t Wrong choice !!!";
			break;
		}
	} while (ch != 0);



}