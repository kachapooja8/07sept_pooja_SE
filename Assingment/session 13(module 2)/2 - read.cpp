#include<stdio.h>
main()
{
	FILE *fl;
	char str[100];
	fl=fopen("playlist.txt","r");
	
	while(fgets(str,100,fl)!=NULL)
	{
		printf("%s",str);
	}
}
