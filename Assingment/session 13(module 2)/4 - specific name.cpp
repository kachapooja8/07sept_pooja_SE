#include<stdio.h>
#include<string.h>
main()
{
    FILE *fl;
    char song[100];
    fl = fopen("playlist.txt","r");
    while(fgets(song,100,fl) != NULL)
    {
        strlwr(song);
        if(strstr(song,"love") != NULL)
        {
            printf("%s",song);
        }
    }
}
