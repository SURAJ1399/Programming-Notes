#include<iostream.h>
#include<conio.h>
void sum(int a,int b)
{
	int c;
	c = a+b;
	cout<<"Addition = "<<c;
}
void main()
{
	int num1=3,num2=2;
	clrscr();
	sum(num1,num2);
	getch();
}