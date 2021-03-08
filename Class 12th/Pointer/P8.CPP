#include<iostream.h>
#include<conio.h>
void main()
{
	int num1=5;
	int *ptr1=&num1;
	int num2=10;
	int *ptr2=&num2;
	clrscr();
	cout<<num1<<"\t"<<ptr1;
	cout<<endl;
	cout<<num2<<"\t"<<ptr2;
	getch();
}