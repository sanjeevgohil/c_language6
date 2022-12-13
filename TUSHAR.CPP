#include<stdio.h>
#include<conio.h>
void main()
{
	long int sal,da,ma,ta,totsal;
	clrscr();
	printf("\n Enter Salary :");
	scanf("%ld",&sal);

	da=sal*35/100;
	ma=sal*10/100;
	ta=sal*15/100;
	totsal=sal+da+ma+ta;

	printf("\nDA is  : %ld",da);
	printf("\nMA is  : %ld",ma);
	printf("\nTA is  : %ld",ta);
	printf("\n Total Salary : %ld",totsal);
	getch();
}