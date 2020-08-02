#include<iostream>
using namespace std;

void main()
{
	int **m, row, col, i, j;
	cout << "\n\n\t Enter no of Row and col";
	cin >> row >> col;

	m = new int*[row];
	for (i = 0; i < row; i++)
		m[i] = new int[col];

	int ch;
	do
	{
		cout << "\n\n\t1.Accept\
                \n\t2.Display\
                \n\t3.Trancepose\
                 \n\t0.exit\
                  \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
			//Accept data
		case 1:
			for (i = 0; i < row; i++)
			{
				cout << "\n\n\t Enter " << col << "element";
				for (j = 0; j < col; j++)
					cin >> m[i][j];
			}
			break;
			//Display data
		case 2:
			for (i = 0; i < row; i++)
			{
				cout << "\n\n";
				for (j = 0; j < col; j++)
					cout << " " << m[i][j];

			}
			break;
		case 3:
		{
			cout << "Transpose of Matrix : \n ";
			for (i = 0; i <col; i++)
			{
				for (j = 0; j <row; j++)
					cout << m[j][i] << " ";
				cout << "\n ";
			}
		}
		break;
		default:
			cout << "\n\t wrong choice ";
		}
	} while (ch != 3);
}
