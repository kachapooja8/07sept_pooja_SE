#include<stdio.h>
#include<string.h>
addtocart(char name[3][20])
{
	char cart[10];
	printf("\nEnter your product:");
	scanf("%s",&cart);
	printf("\nUpdated cart:");
	strcpy(name[2],cart);
	for(int i=0;i<3;i++)
	{
		printf("\n%d.%s",i+1,name[i]);
	}
}
main()
{
	char name[3][20]={"Leptop","Mobile"};
	printf("\n1.%s",name[0]);
	printf("\n2.%s",name[1]);
	addtocart(name);
}
