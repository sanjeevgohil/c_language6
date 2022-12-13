#include<iostream.h>
#include<conio.h>
template <class T>
T sum(T a,T b)
{
	return (a+b);
}
void main()
{
	int x=4,y=2;
	clrscr();
	cout<<"\nSum is : "<<sum(x,y);
	float n1=2.5,n2=2.2;
	cout<<"\nSum is : "<<sum(n1,n2);
	getch();
}

