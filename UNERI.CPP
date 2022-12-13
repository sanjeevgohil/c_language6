#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	void setval(int i)
	{
		a=i;
	}
	void disp(void)
	{
		cout<<"\n value of A is:"<<a;
	}
	abc operator ++()
	{
		abc temp;
		temp.a=a+20;
		return temp;
	}
};
void main()
{
	abc a1,a2,a3;
	clrscr();
	a1.setval(20);
	a2=a1++;
	a3=a2++;
	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}
