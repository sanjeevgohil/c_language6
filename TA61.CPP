#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tot=0;
	float per;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("\n Number is:%d",i);
		tot=tot+i;
	}
	per=tot/10.00;

	printf("\n Total is:%d",tot);
	printf("\n Per is:%2f",per);
	getch();
}