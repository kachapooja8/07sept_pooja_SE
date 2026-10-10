#include<stdio.h>
struct expense
{
	char category[20];
	float amount;
};
main()
{
	struct expense expenses[10];
	int ch;
	int count=0;
	do
	{
		printf("\n1. Add expense");
		printf("\n2. View all expenses");
		printf("\n3. Save & exit\n");
		
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		if(ch==1)
		{
    		if(count<10)
    		{
        		printf("\nEnter expense category: ");
        		scanf("%s",expenses[count].category);

        		printf("\nEnter expense amount: ");
        		scanf("%f", &expenses[count].amount);
        		count++;

        		printf("\nExpense added successfully!\n");
    		}
    	else
    	{
        	printf("\nExpense list is full!\n");
    	}
		}
		
		if(ch==2)
		{
    		float total = 0;
    		int i;

    		printf("\nCategory\tAmount\n");
    		printf("-----------------------------\n");

    		for(i=0;i<count;i++)
    		{
        		printf("%-20s %.2f\n",expenses[i].category,expenses[i].amount);
        		total = total+expenses[i].amount;
    		}

    		printf("-----------------------------\n");
    		printf("\nRunning Total:%.2f\n",total);
		}
		
		if(ch==3)
		{
    		FILE *fp;
    		int i;
    		fp=fopen("expenses.txt","w");

    		if(fp==NULL)
    		{
        		printf("\nFile cannot be opened!");
    		}
    		else
    		{
        		for(i=0;i<count;i++)
        		{
           	 		fprintf(fp,"%s,%.2f\n",expenses[i].category,expenses[i].amount);
        		}
        		printf("\nExpenses saved successfully!\n");
    		}
		}
	}
	while(ch!=3);	
}
