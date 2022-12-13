#include<stdio.h>
#include<conio.h>
int sum (void);
void main()
{
	int c;
	printf("\nTotal Is :%d",c);
	getch();
	c=sum();
}
int sum (void)
{
	int a,b,c;
	clrscr();
	printf("\nEnter First Value :");
	scanf("%d",&a);
	printf("\nEnter Second Value :");
	scanf("%d",&b);

	c=a+b;
	return c;
}
