#include<iostream.h>
#include<conio.h>
void main()
{
	int num=5;
	int *ptr=&num;
	clrscr();
	cout<<"Value in num variable : "<<num;
	cout<<"\nValue of num variable : "<<*ptr;
	getch();
}