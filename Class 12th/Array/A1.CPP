#include<iostream.h>
#include<conio.h>
void main()
{
	int num[5],i;
	clrscr();
	cout<<"Enter elements for Single dimensional array :-\n\n";
	for(i=0;i<5;i++)
	{
		cout<<"Enter element : ";
		cin>>num[i];
	}
	cout<<"\nElements in the array are :-\n\n";
	for(i=0;i<5;i++)
	{
		cout<<num[i]<<" ";
	}
	getch();
}