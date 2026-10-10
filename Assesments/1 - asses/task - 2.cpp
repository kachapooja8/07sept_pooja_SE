#include<stdio.h>
int main()
{
    float days[7];
    float total=0,avg;
    int i,j,high=0;
    for(i=0;i<7;i++)
    {
        input:
        printf("Enter study hours for Day %d: ",i+1);
        scanf("%f",&days[i]);

        if(days[i]<0||days[i]>24)
        {
            printf("Invalid input! Enter hours between 0 and 24.\n");
            goto input;
        }
    }
    for(i=0;i<7;i++)
	{
    	total=total+days[i];
	}
	printf("\n\nWeekly total=%.2f",total);
	
	avg=total/7;
	printf("\nWeekly avrage=%.2f",avg);
	
	for(i=1;i<7;i++)
	{
		if(days[i]>days[high])
		{
			high=i;
		}
	}
	printf("\nHighest study hours : day %d",high+1);
	printf("\nHours=%.2f\n\n",days[high]);
	
	for(i=0;i<7;i++)
	{
    	printf("Day %d: ",i+1);
    	for(j=0;j<(int)days[i];j++)
    	{
        	printf("*");
    	}
    printf("\n");
	}
	
    return 0;
}
