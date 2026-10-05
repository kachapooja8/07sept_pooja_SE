#include<stdio.h>
main()
{
    int orders[5] = {250, 180, 320, 150, 450};
    int *ptr;
    int i;
    ptr = orders;
    for(i = 0; i < 5; i++)
    {
        printf("Order Amount = %d\n", *ptr);
        printf("Memory Address = %p\n\n", ptr);
        ptr++;
    }
}
