#include<stdio.h>
#include<conio.h>
void main()
{
	int a=2000,b=3000;
	clrscr();
	while(a<=b)
	{
		printf("Leap Year From 2000 to 3000:-%d\n",a);
		a+=4;
	}
	getch();
}