#include"PriQueue.h"
void main()
{
	PriQueue q1;
	Data data;
	int no1, no2;
	int ch;
	do
	{
		cout << "\n\n\t\t1.Enqueue\
                \n\t\t2.DeQueue\
                 \n\t\t3.Display\
                  \n\t\t0.Exit\
                   \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter data and priority to insert :";
			cin >> no1 >> no2;

			data.setEle(no1);
			data.setPri(no2);
			q1.EnQueue(data);
			break;
		case 2:
			data = q1.DeQueue();
			cout << "\n\n\t Delete Ele is " << data.getEle();
			break;
		case 3:
			q1.Display();
			break;

		}
	} while (ch != 0);
}