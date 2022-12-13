#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s,e;
	clrscr();
	printf("\n Enter starting number:");
	scanf("%d",&s);
	printf("\n Enter ending number:");
	scanf("%d",&e);

	if(s<=e)
	{
		i=s;
		i<=e;
		do
		{
			printf("\n Number is:%d",i);
			i=i+1;
		}while(i<=e);
	}
	else
	{
		i=e;
		do
		{
			printf("\n Number is:%d",i);
			i=i+1;
		}while(i<=e);
	}
	getch();
}