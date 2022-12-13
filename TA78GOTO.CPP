#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=5;
	A:
		j=1;
		B:
			printf(" %d ",j);
			j++;
		if(j<=i)
		{
			goto B;
		}
		printf("\n");
		i--;
	if(i>=1)
	{
		goto A;
	}
	getch();
}