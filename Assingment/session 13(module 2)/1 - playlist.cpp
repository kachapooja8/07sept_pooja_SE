#include<stdio.h>
main()
{
	FILE *fl;
	fl=fopen("playlist.txt","w");
	
	fprintf(fl,"Tum Hi Ho\n");
	fprintf(fl,"Kesariya\n");
	fprintf(fl,"Apna Bana Le\n");
}
