#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		i%2==0?printf(" * "):printf(" * ");
		for(j=1;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
