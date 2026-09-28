#include<stdio.h>
main()
{
	char productname[20]="leptop";
	float price=55000;
	double rating=4.5;
	
	printf("Product name is:%s",productname);
	printf("\nVariable type = string");
	
	printf("\nProduct price is:%.2f",price);
	printf("\nVariable type = float");
	
	printf("\nProduct rating is:%lf",rating);
	printf("\nVariable type = double");
}
