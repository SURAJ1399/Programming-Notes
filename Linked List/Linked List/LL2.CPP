//PROGRAM FOR LINKED LIST
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *prev;
	struct list *next;
};
void main()
{
	struct list *start=NULL;
	struct list *node, *tmp;
	int num,found=0,loc=0;
	int ch;
	while(ch != 4)
	{
		clrscr();
		cout<<"1. Create List";
		cout<<"\n2. Search Data";
		cout<<"\n3. Print Data";
		cout<<"\n4. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				tmp = new struct list[0];
				cout<<"\nEnter data : ";
				cin>>tmp->data;
				tmp->prev = NULL;
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
				cout<<"\nEnter number to be searched : ";
				cin>>num;
				node = start;
				while(node != NULL)
				{
					loc++;
					if(node->data == num)
					{
						found = 1;
						break;
					}
					node = node->next;
				}
				if(found==0)
				{
					cout<<"\nNot Found the number.";
				}
				else
				{
					cout<<"\nFound the number at "<<loc<<" location.";
				}
				getch();
				break;
			case 3:
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