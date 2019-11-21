#include<iostream.h>
#include<conio.h>
void main()
{
	int size,*num,i,j,k,tmp;
	clrscr();
	cout<<"Enter desired size for Single dimensional array : ";
	cin>>size;
	num = new int[size];
	cout<<"\nEnter elements for Single dimensional array :-\n\n";
	for(i=0;i<size;i++)
	{
		cout<<"Enter element at "<<i+1<<" location : ";
		cin>>*(num+i);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(num+i) > *(num+j))
			{
				tmp = *(num+i);
				*(num+i) = *(num+j);
				*(num+j) = tmp;
			}
		}
	}
	cout<<"\nAfter selection sort, elements in the array are :-\n\n";
	for(k=0;k<size;k++)
	{
		cout<<*(num+k)<<" ";
	}
	delete num;
	getch();
}