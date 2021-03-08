#include<iostream.h>
#include<conio.h>
void main()
{
	int num[100],size,i;
	clrscr();
	cout<<"Enter desired size of Single dimensional array (upto 100): ";
	cin>>size;
	cout<<"\nEnter elements for Single dimensional array :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<"Enter element : ";
		cin>>num[i];
	}
	cout<<"\nElements in the array are :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	getch();
}