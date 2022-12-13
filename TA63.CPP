#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&n);
	for(i=2;i<n;i=i+1)
	{
		if(n%i==0)
		{
			flag=1;
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