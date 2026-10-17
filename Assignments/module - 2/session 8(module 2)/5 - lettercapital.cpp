#include<stdio.h>
//#include<string.h>
capitalize(char str[])
{
	if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    printf("%s\n", str);
}
main()
{
	char name[10];
	printf("Enter your name:");
	scanf("%s",&name);
	printf("\nName:");
	capitalize(name);
}
