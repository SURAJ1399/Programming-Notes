//Stack in List
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
void main()
{
	clrscr();
	struct stack *start=NULL;
	struct stack *node,*tmp;
	int ans;
	while(ans != 4)
	{
		clrscr();
		cout<<"1. PUSH";
		cout<<"\n2. POPPED";
		cout<<"\n3. Print Data in Stack";
		cout<<"\n4. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ans;
		switch(ans)
		{
			case 1:
				tmp = new struct stack[0];
				if(tmp == NULL)
				{
					cout<<"\nOverflow.";
				}
				else
				{
					cout<<"\nEnter data : ";
					cin>>tmp->data;
					tmp->next = start;
					start = tmp;
					cout<<"\nPUSH Successful.";
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
					cout<<"\nStack is empty.";
				}
				else
				{
					cout<<"\nData in Stack :-\n\n";
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