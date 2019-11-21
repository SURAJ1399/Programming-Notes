#include<iostream.h>
#include<conio.h>
void main()
{
	int num1[50],num2[50],size,i,j,temp,element;
	char found='n';
	clrscr();
	cout<<"Enter the required size of array (upto 50): ";
	cin>>size;
	if(size <= 50)
	{
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
		cout<<"\n\nEnter the element to be inserted : ";
		cin>>element;
		for(i=0;i<size;i++)
		{
			if(element < num1[i])
			{
				num2[i] = element;
				for(j=i+1;j<size+1;j++)
				{
					num2[j] = num1[i];
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
			num2[i] = element;
		}
		cout<<"\nNow elements in the array are :-\n\n";
		for(i=0;i<size+1;i++)
		{
			cout<<num2[i]<<" ";
		}
	}
	else
		cout<<"\nERROR : Size of array exceeded!!!!";
	getch();
}