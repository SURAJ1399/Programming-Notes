//Queue in Array (with desired size of array upto certain limit)
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int queue[100],size,top=-1,bottom=-1,ans,i;
	cout<<"Enter desired size of Single Dimensional Array for the Queue (upto 100): ";
	cin>>size;
	while(ans != 4)
	{
		clrscr();
		cout<<"Accomodation of maximum element in the Queue = "<<size;
		cout<<"\n\n1. PUSH";
		cout<<"\n2. POP";
		cout<<"\n3. Print Data in Queue";
		cout<<"\n4. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ans;
		switch(ans)
		{
			case 1:
				if(bottom+1 == size)
				{
					cout<<"\nOverflow.";
				}
				else
				{
					bottom++;
					cout<<"\nEnter data : ";
					cin>>queue[bottom];
					cout<<"\nPUSH Successful.";
				}
				getch();
				break;
			case 2:
				if(bottom == top)
				{
					cout<<"\nUnderflow.";
				}
				else
				{
					top++;
					cout<<"\nPOPPED.";
					cout<<"\nElement : "<<queue[top];
					for(i=top;i<bottom;i++)
					{
						queue[i] = queue[i+1];
					}
					bottom = i-1;
					top=-1;
				}
				getch();
				break;
			case 3:
				if(bottom == -1)
				{
					cout<<"\nQueue is empty.";
				}
				else
				{
					cout<<"\nElement in the array of Queue :-\n\n";
					for(i=top+1;i<=bottom;i++)
					{
						cout<<queue[i]<<" ";
					}
				}
				getch();
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"\nInvalid choice, try again!!";
				getch();
				break;
		}
	}
}









