#include<stdio.h>
struct playlist
{
	char title[20];
	char artist[20];
	int sec;
};
main()
{
	struct playlist pl={"Tum Hi Ho","Arijit Singh",262};
	printf("\nSong title:%s",pl.title);
	printf("\nArtist name:%s",pl.artist);
	printf("\nDuration:%d",pl.sec);
}
