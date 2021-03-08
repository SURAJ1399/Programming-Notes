#include<iostream.h>
#include<conio.h>
void main()
{
	int num[100],size,i,j,k,temp;
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
	//bubble sort
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(num[j] > num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
		cout<<"\n\nAfter -"<<i+1<<"- pass, elements in the array are : ";
		for(k=0;k<size;k++)
		{
			cout<<num[k]<<" ";
		}
	}
	cout<<"\n\nAfter Bubble sort, elements in the array are :-\n\n";
	for(k=0;k<size;k++)
	{
		cout<<num[k]<<" ";
	}
	getch();
}















