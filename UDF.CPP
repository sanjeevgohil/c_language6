#include<stdio.h>
#include<conio.h>
#define size 5

void input (int[]);
void output (int[]);
void main ()
{
	int a[size],b[size],i;
	clrscr();
	printf("\n input A array:\n");
	input(a);

	printf("\n input B aray:\n");
	input(b);

	printf("\n output in an array:\n");
	output(a);

	printf("\n output B array:\n");
	output(b);

	getch();
}