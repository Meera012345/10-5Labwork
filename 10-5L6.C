#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	while(n>=i)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	getch();
}