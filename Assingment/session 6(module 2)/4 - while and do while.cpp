#include<stdio.h>
main()
{
	int i=5;
	while(i<5) //Entry controlled loop
	{
		printf("\n%d",i);
		i++;
	}
	
	i=5; //Exit controlled loop
	do
	{
		printf("\n%d",i);
		i++;
	}
	while(i<5);			
}
