#include<stdio.h>
main()
{
    int likes;
    int *ptrLikes;
    likes = 100;
    ptrLikes = &likes;
    printf("Likes value: %d\n", likes);
    printf("Address stored in ptrLikes: %p\n", ptrLikes);
}

