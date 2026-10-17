#include<stdio.h>
main()
{
	int like=1000;
	int comment=200;
	int share=50;
	
	if(like<=1000 || (comment>=200 && share==50))
	{
		printf("\nLike:%d",like);
		printf("\ncomment:%d",comment);
		printf("\nshare:%d",share);
	}
}
