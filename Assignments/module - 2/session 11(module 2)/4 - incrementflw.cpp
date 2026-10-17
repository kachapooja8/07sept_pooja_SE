#include<stdio.h>
void incrementFollowers(int *followers, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}
main()
{
    int followers[5] = {1200, 2500, 1800, 3000, 1500};
    int i;
    incrementFollowers(followers, 5);
    printf("Updated Followers:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", followers[i]);
    }
}
