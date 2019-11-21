//PROGRAM FOR LINKED LIST
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
};
void main()
{
	struct list *start=NULL;
	struct list *node, *tmp;
	int ch;
	while(ch != 3)
	{
		clrscr();
		cout<<"1. Create List";
		cout<<"\n2. Print Data";
		cout<<"\n3. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				tmp = new struct list[0];
				cout<<"\nEnter data : ";
				cin>>tmp->data;
				tmp->next = NULL;
				if(start == NULL)
				{
					start = tmp;
					node = tmp;
				}
				else
				{
					node->next = tmp;
					node = node->next;
				}
				cout<<"\nList Created.";
				getch();
				break;
			case 2:
				if(start == NULL)
				{
					cout<<"\nList is Empty.";
				}
				else
				{
					cout<<"\nData in the List are :-\n\n";
					node = start;
					while(node->next != NULL)
					{
						cout<<node->data<<" ";
						node = node->next;
					}
					cout<<node->data;
				}
				getch();
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"\nInvalid choice, try again!!";
				getch();
				break;
		}
	}
}