#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	do
	{
		j=i;
		do
		{
			printf(" %d ",j);
			j++;
		}while(j<=5);
		printf("\n");
		i++;
	}while(i<=5);
	getch();
}