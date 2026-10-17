#include<stdio.h>
main()
{
	int rows,i,j;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++) //row
	{
		for(j=1;j<=rows-i;j++) //spaces
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
