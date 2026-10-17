#include<stdio.h>
main()
{
    FILE *fl;
    fl = fopen("playlist.txt","a");

    fprintf(fl,"Tera Ban Jaunga\n");
    fprintf(fl,"Heeriye\n");
    fprintf(fl,"Love me like you do\n");
}
