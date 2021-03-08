#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char name[20];
	char *ptr;
	clrscr();
	cout<<"Enter name : ";
	gets(name);
	ptr = &name[0];				//ptr = name;
	cout<<"\nData in the array is :-\n\n";
	while(*ptr != '\0')
	{
		cout<<*ptr;
		ptr++;
	}
	getch();
}