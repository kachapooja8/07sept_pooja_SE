#include<stdio.h>
main()
{
	int rating[3][5]={
	{3,4,5,2,1},
	{4,3,2,1,5},
	{4,2,5,1,2}
	};
	int i;
	printf("2nd playlist rating:");
	for(i=0;i<5;i++)
	{
		printf("%d",rating[1][i]);
	}
}
