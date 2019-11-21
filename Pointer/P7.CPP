#include<iostream.h>
#include<conio.h>
void main()
{
	int num[]={11,12,13,14,15};
	int *ptr=num;
	clrscr();
	for(int i=0;i<5;i++)
	{
		cout<<num[i]<<"\t"<<ptr<<"\n";
		ptr++;
	}
	getch();
}