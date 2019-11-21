//Queue in List
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
void main()
{
	struct queue *start=NULL;
	struct queue *node,*tmp;
	int ans;
	while(ans != 4)
	{
		clrscr();
		cout<<"1. PUSH";
		cout<<"\n2. POP";
		cout<<"\n3. Print Data in Queue";
		cout<<"\n4. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ans;
		switch(ans)
		{
			case 1:
				tmp = new struct queue[0];
				if(tmp == NULL)
				{
					cout<<"\nOverflow.";
				}
				else
				{
					cout<<"\nEnter data : ";
					cin>>tmp->data;
					tmp->next = NULL;
					if(start == NULL)
					{
						start = tmp;
					}
					else
					{
						node = start;
						while(node->next != NULL)
						{
							node = node->next;
						}
						node->next = tmp;
					}
					cout<<"\nPUSH Succesful.";
				}
				getch();
				break;
			case 2:
				if(start == NULL)
				{
					cout<<"\nUnderflow.";
				}
				else
				{
					tmp = start;
					start = start->next;
					cout<<"\nPOPPED.";
					cout<<"\nData : "<<tmp->data;
					delete tmp;
				}
				getch();
				break;
			case 3:
				if(start == NULL)
				{
					cout<<"\nQueue is empty.";
				}
				else
				{
					cout<<"\nData in Queue :-\n\n";
					node = start;
					while(node != NULL)
					{
						cout<<node->data<<" ";
						node = node->next;
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