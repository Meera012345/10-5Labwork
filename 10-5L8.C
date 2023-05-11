#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,i,n;
	clrscr();
	i=1;
	sum=0;
	printf("Enter the value of N:-");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("The sum of Numbers from 1 to %d is=%d\n",n,sum);
		sum+=i;
		i++;
	}
	getch();
}