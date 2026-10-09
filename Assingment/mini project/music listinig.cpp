#include<stdio.h>
main()
{
    int n;
    int days[7];
    int hig;
    
	do
    {
        printf("\n============ Music Listening Logger ============\n");

        printf("\n1. Log new listening minutes");
        printf("\n2. View weekly summary");
        printf("\n3. Reset weekly data");
        printf("\n4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
                for(int i=0;i<7;i++)
                {
                    printf("\nEnter Day %d music listening Minutes: ",i+1);
                    scanf("%d",&days[i]);
                }
                
                FILE *fl;
                fl=fopen("music_log.txt","w");
                for(int i=0;i<7;i++)
                {
                	fprintf(fl,"\nDay %d : %d Minutes",i+1,days[i]);
				}
				printf("\nData stored successfully\n");
                break;

            case 2:
                printf("\n============ Weekly Summary ============\n");
                for(int i=0;i<7;i++)
                {
                    printf("\nDay %d : %d Minutes\n",i+1,days[i]);
                }
                
                char str[200];
                fl=fopen("music_log.txt","r");
                while(fgets(str,100,fl)!=NULL)
				{	
					printf("%s",str);
				}
				
				int tot;
				hig=days[0];
				float avg;
				printf("\n============ Weekly Report ============\n");
				
				tot=days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+days[6];
				printf("\nTotal Listening Minutes: %d",tot);
				
				avg=tot/7;
				printf("\nAverage Listening Minutes: %.2f",avg);
				
				for(int i=1;i<7;i++)
				{
    				if(days[i]>hig)
    				{
        				hig=days[i];
    				}
				}
				printf("\nHighest Listening Minutes: %d\n",hig);
                break;

            case 3:

            	char cnf;
            	printf("\nAre you sure you want to reset weekly data? (y/n):");
            	scanf(" %c",&cnf);
            	if(cnf == 'y' || cnf == 'Y')
            	{
            		for(int i=0;i<7;i++)
					{
    					days[i] = 0;
					}
					fl=fopen("music_log.txt","w");
					printf("\nWeekly data reset successfully!");
				}
				else
				{
					printf("\nReset cancle");
				}
                break;
            
            case 4:
            	printf("\nThank you for using Music Listening Logger!\n");
                break;

            default:
                printf("\nInvalid choice!");
        }

    }while(n!=4);
}
