/*Write a program to print a pattern
date:27/01/2022
design by mahendar ladumor*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
printf("enter the number :");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
