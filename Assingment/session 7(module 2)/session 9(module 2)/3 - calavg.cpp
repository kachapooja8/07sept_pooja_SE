#include<stdio.h>
calavg(int order[],int size)
{
	int i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum = sum + order[i];
    }
    return (float)sum / size;
}
main()
{
	int order[7]={100,200,300,400,450,550,600};
	float avg;
	avg=calavg(order,7);
	printf("weekly avg spend:%.2f",avg);
}
