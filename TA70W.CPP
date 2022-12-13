#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	while(i<=5)
	{
		if(i%2==0)
		{
			printf(" # ");
		}
		else
		{
			printf(" * ");
		}

		i++;
	}
	getch();

}