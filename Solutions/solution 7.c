/*Write a program to print a pattern
date:27/01/2022
design by mahendar ladumor*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	clrscr();
	printf("Enter the no:\n");
	scanf("%d",&n);
	for(i=n;i>=1.;i--)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}