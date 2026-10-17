#include<stdio.h>
main()
{
	int fc=50;
	printf("\nBefore pre increment:%d",fc);
	printf("\nPre increment:%d",++fc);
	printf("\nAfter pre increment:%d",fc);
	
	printf("\nBefore post-increment: %d", fc);
    printf("\nPost-increment: %d", fc++);
    printf("\nAfter post-increment: %d", fc);
}
