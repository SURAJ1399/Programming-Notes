#include<iostream.h>
#include<conio.h>
void main()
{
	int *a;
	float *b;
	char *c;
	long *d;
	double *e;
	clrscr();
	cout<<"Size of pointer variable (int) = "<<sizeof(a)<<" bytes";
	cout<<"\nSize of pointer variable (float) = "<<sizeof(b)<<" bytes";
	cout<<"\nSize of pointer variable (char) = "<<sizeof(c)<<" bytes";
	cout<<"\nSize of pointer variable (long) = "<<sizeof(d)<<" bytes";
	cout<<"\nSize of pointer variable (double) = "<<sizeof(e)<<" bytes";
	getch();
}