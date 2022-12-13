#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			i=i+1;
		}
	}
	if(flag == 0)
	{
		printf("\n Number is prime");
	}
	else
	{
		printf("\n Number is not prime");
	}
	getch();
}