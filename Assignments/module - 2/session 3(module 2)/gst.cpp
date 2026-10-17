#include<stdio.h>
main()
{
	const float GST=18.0;
	float baseprice=500.0;
	float gstamount,finalprice;
	
	gstamount=baseprice*GST/100;
	finalprice=baseprice+gstamount;
	
	printf("Baseprice:%.2f",baseprice);
	printf("\nGST:%.2f",GST);
	printf("\nFinalprice:%.2f",finalprice);	
}
