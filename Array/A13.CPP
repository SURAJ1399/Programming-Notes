#include<iostream.h>
#include<conio.h>
void main()
{
	int num[100],size,i,element;
	char found='n';
	clrscr();
	cout<<"Enter desired size of Single dimensional array (upto 100): ";
	cin>>size;
	cout<<"\nEnter elements for Single dimensional array :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<"Enter element at location number "<<i+1<<" : ";
		cin>>num[i];
	}
	cout<<"\nElements in the array are :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	//linear search
	cout<<"\n\nEnter an element to be searched : ";
	cin>>element;
	for(i=0;i<size;i++)
	{
		if(element == num[i])
		{
			cout<<"\nFound the element at location number : "<<i+1;
			found = 'y';
		}
	}
	if(found == 'n')
	{
		cout<<"\nERROR : Not Found the element.";
	}
	getch();
}
















