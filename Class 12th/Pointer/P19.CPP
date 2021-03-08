#include<iostream.h>
#include<conio.h>
void main()
{
	char name[]="Nitesh Kumar";
	char *ptr;
	clrscr();
	ptr = &name[0];				//ptr = name;
	cout<<"Data in the array is :-\n\n";
	while(*ptr != '\0')
	{
		cout<<*ptr;
		ptr++;
	}
	getch();
}