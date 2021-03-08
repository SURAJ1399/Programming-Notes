#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int *rollno;
	float *marks;
	int size,i;
	clrscr();
	cout<<"Enter number of students : ";
	cin>>size;
	rollno = new int[size];
	marks = new float[size];
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter roll number : ";
		cin>>rollno[i];
		cout<<"Enter marks : ";
		cin>>marks[i];
	}
	cout<<"\nRecords of students are :-\n";
	cout<<"\nRoll No.\tMarks\n\n";
	for(i=0;i<size;i++)
	{
		cout<<rollno[i]<<"\t\t";
		cout<<marks[i]<<"\n";
	}
	delete[]rollno;
	delete[]marks;
	getch();
}