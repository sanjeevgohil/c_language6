#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tot=0;
	float per;
	clrscr();
	i=1;
	while(i<=10)
	{
		printf("\n Number is:%d",i);
		tot=tot+i;
		i++;
	}
	per=tot/10.00;

	printf("\n Total is:%d",tot);
	printf("\n Per is:%2f",per);
	getch();
}