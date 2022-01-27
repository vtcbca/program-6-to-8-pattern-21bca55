/*Write a program to print a pattern
date:27/01/2022
design by mahendar ladumor*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k;
	clrscr();
	printf("Enter the Number :\n");
  printf("______________________________");
	scanf("\n\t%d",&n);
for(i=0;i<=n;i++)
	{
		for(k=n;k>=i;k--)
		{
			printf("  ");
		}
		for(j=i;j>1;j--)
		{
			printf(" %d",j);
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	getch();
}