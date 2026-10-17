#include<stdio.h>
struct fooditem{
	char itemname[20];
	float price;
	float rating;
};
main()
{
	fooditem ft[3]={
		{"Pizza",350,3.5},
		{"Samosa",250,4.5},
		{"Burger",150,5.5}
		};
	for(int i=0;i<3;i++)
	{
		printf("\nItem name:%s",ft[i].itemname);
		printf("\nPrice:%.2f",ft[i].price);
		printf("\nRate:%.2f",ft[i].rating);
	}
}
