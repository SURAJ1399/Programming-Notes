#include<iostream.h>
#include<conio.h>
void main()
{
	int *ptr=NULL;
	clrscr();
	cout<<"Value in given location : "<<*ptr;
	cout<<"\nAddress of given location : "<<ptr;
	getch();
}