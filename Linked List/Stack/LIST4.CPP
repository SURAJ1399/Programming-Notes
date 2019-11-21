//Stack in Array (with fixed size of array)
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int stack[10],top=-1,ans,i;
	while(ans != 4)
	{
		clrscr();
		cout<<"Accomodation of maximum element in the stack : 10";
		cout<<"\n\n1. PUSH";
		cout<<"\n2. POP";
		cout<<"\n3. Print Data in Stack";
		cout<<"\n4. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ans;
		switch(ans)
		{
			case 1:
				if(top == 9)
				{
					cout<<"\nOverflow.";
				}
				else
				{
					top++;
					cout<<"\nEnter data : ";
					cin>>stack[top];
					cout<<"\nPUSH Successful.";
				}
				getch();
				break;
			case 2:
				if(top == -1)
				{
					cout<<"\nUnderflow.";
				}
				else
				{
					cout<<"\nPOPPED.";
					cout<<"\nElement : "<<stack[top];
					top--;
				}
				getch();
				break;
			case 3:
				if(top == -1)
				{
					cout<<"\nStack is empty.";
				}
				else
				{       cout<<"\nElements in the array of Stack :-\n\n";
					for(i=top;i>=0;i--)
					{
						cout<<stack[i]<<" ";
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
