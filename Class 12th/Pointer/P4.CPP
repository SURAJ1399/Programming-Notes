#include<iostream.h>
#include<conio.h>
void main()
{
	int num;
	int *ptr;
	clrscr();
	num = 5;
	cout<<"Value in num variable : "<<num;
	ptr = &num;
	cout<<"\nValue of num variable : "<<*ptr;
	getch();
}