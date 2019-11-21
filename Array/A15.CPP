#include<iostream.h>
#include<conio.h>
void main()
{
	int num[100],size,i,j,temp,element,beg,mid,last;
	char found='n';
	clrscr();
	cout<<"Enter desired size of Single dimensional array : ";
	cin>>size;
	cout<<"\nEnter elements for the Single dimensional array :-\n\n";
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
	//selection sort
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout<<"\n\nAfter selection sort, elements in the array are :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	//binary search
	cout<<"\n\nEnter an element to be searched : ";
	cin>>element;
	beg = 0;
	last = size-1;
	while(beg <= last)
	{
		mid = (beg+last)/2;
		if(element == num[mid])
		{
			cout<<"\nSuccessful search!!";
			cout<<"\nFound the element at location number "<<mid+1;
			found = 'y';
			break;
		}
		else if(element < num[mid])
		{
			last = mid-1;
		}
		else
		{
			beg = mid+1;
		}
	}
	if(found == 'n')
	{
		cout<<"\nERROR: Not Found the element.";
	}
	getch();
}
















