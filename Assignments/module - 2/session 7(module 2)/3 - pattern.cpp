#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=6;i++) //row
	{
		for(j=1;j<=6-i;j++) //spaces
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
