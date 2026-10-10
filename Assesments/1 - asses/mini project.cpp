#include<stdio.h>
struct studylog
{
	char sub[40];
	float hours[7];
};
void weeklyreport(struct studylog s[],int n)
{
	int i,j,tot;
	float avg;
	
	for(i=0;i<n;i++)
	{
		tot=0;
		printf("\nSubject:%s",s[i].sub);
		for(j=0;j<7;j++)
		{
			tot=tot+s[i].hours[j];
		}
		avg=tot/7;
		
		printf("\nWeekly total:%d",tot);
		printf("\nWeekly avrage:%.2f\n",avg);
		
	}
}
main()
{
	struct studylog s[3]={
		{"python",{0,0,0,0,0,0,0}},
		{"java",{0,0,0,0,0,0,0}},
		{"c++",{0,0,0,0,0,0,0}}
	};
	int ch,i,day;
	FILE *fl;
	do{
		printf("\n============= Study Hours Tracker =============\n");
		printf("\n1. Log today's study hours");
		printf("\n2. View weekly report");
		printf("\n3. Save & exit\n");
		
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\nEnter day number (1-7):");
				scanf("%d",&day);
				
				if(day<1 && day>7)
				{
					printf("\nInvalid input");
					break;
				}
				for(i=0;i<3;i++)
				{
					printf("Enter hours for %s:",s[i].sub);
					scanf("%f",&s[i].hours[day-1]);
				}
				printf("\nStudy hours logged successfully!\n");
				break;
				
			case 2:
				weeklyreport(s,3);
				
				printf("\n---- Progress chart ----\n");
				
				for(i=0;i<3;i++)
				{
					printf("%s:",s[i].sub);
					for(int j=0;j<(int)s[i].hours[day-1];j++)
					{
						printf(".");
					}
					printf("\n");
				}
				break;
				
			case 3:
				fl=fopen("productivity_log.txt","w");
				for(i=0;i<3;i++)
				{
					fprintf(fl,"%s",s[i].sub);
					for(int j=0;j<7;j++)
					{
						fprintf(fl,"%.2f",s[i].hours[j]);
					}
					fprintf(fl,"\n");
				}
				printf("\nRecords saved successfully.");
		}
	}
	while(ch!=3);
	
	return 0;
}
