#include<stdio.h>
main()
{
	int score[3][2]={
	{182,300},
	{200,250},
	{150,350}
	};
	int i,hig;
	for(i=0;i<3;i++)
	{
		if(score[i][0]>score[i][1])
		{
			hig=score[i][0];
		}
		else
		{
			hig=score[i][1];
		}

		printf("\nMatch %d Highest score = %d",i+1,hig);
	}
}
