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
		while(i<=e)
		{
			printf("\n Number is:%d",i);
			i=i+1;
		}
	}
	else
	{
		i=e;
		while(i<=e)
		{
			printf("\n Number is:%d",i);
			i=i+1;
		}
	}
	getch();
}