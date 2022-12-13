#include<stdio.h>
#include<conio.h>
void main()
{
	 int year;
	 clrscr();
	 printf("\n Enter Year :");
	 scanf ("%d",&year);

	 if(year%4==0)
	 {
		printf("\n Year Is Leap Year");
	 }
	 else
	 {
		printf("\n Year Is Not Leap Year");
	 }

	 getch();
}
