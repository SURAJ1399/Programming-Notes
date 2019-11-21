#include<iostream.h>
#include<conio.h>
void main()
{
	int num1[50],num2[50],size,i,j,temp,element;
	char found='n';
	clrscr();
	cout<<"Enter the required size of array (upto 50): ";
	cin>>size;
	cout<<"\nEnter the elements for the array :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<"Enter the element at location number "<<i+1<<" : ";
		cin>>num1[i];
	}
	for(i=0;i<size-1;i++)         		//selection sort
	{
		for(j=i+1;j<size;j++)
		{
			if(num1[i] > num1[j])
			{
				temp = num1[i];
				num1[i] = num1[j];
				num1[j] = temp;
			}
		}
	}
	cout<<"\nElements in the array are :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<num1[i]<<" ";
	}
	cout<<"\n\nEnter the element to be deleted : ";
	cin>>element;
	for(i=0;i<size;i++)
	{
		if(element == num1[i])
		{
			for(j=i;j<size-1;j++)
			{
				num2[j] = num1[i+1];
				i++;
			}
			found = 'y';
			break;
		}
		else
		{
			num2[i] = num1[i];
		}
	}
	if(found == 'n')
	{
		cout<<"\nERROR : Not found the element!!";
	}
	else
	{
		cout<<"\nElement deleted!!";
		cout<<"\nNow elements in the array are :-\n\n";
		for(i=0;i<size-1;i++)
		{
			cout<<num2[i]<<" ";
		}
	}
	getch();
}