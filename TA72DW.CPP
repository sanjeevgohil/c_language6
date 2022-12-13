#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	do
	{
		i%2==0?printf(" * "):printf(" * ");
		j=1;
		do
		{
			printf("%d",j);
			j++;
		}while(j<=5);
		printf("\n");
		i++;
	}while(i<5);
	getch();
}
