#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	while(i<=5)
	{
		i%2==0?printf(" * "):printf(" * ");
		j=1;
		while(j<=5)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}
