#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void main()
{
	int num1=1,num2=2;
	clrscr();
	cout<<"Before swapping :-\n";
	cout<<"\nnum1 = "<<num1;
	cout<<"\nnum2 = "<<num2;
	swap(&num1,&num2);
	cout<<"\n\nAfter swapping :-\n";
	cout<<"\nnum1 = "<<num1;
	cout<<"\nnum2 = "<<num2;
	getch();
}