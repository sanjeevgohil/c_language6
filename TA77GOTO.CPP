#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	A:

		j=i;
		B:

			printf(" %d ",j);
			j--;
		if(j>=1)
		{
			goto B;
		}
		printf("\n");
		i++;
	if(i<=5)
	{
		goto A;
	}
	getch();
}