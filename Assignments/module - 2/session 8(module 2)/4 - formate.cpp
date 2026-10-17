#include<stdio.h>
char* formatPrice(int price)
{
    static char result[20];
    if(price >= 1000)
    {
        sprintf(result, "%d,%03d", price / 1000, price % 1000);
    }
    else
    {
        sprintf(result, "%d", price);
    }
    return result;
}
main()
{
    int price1 = 1599;
    int price2 = 2499;
    int price3 = 599;

    printf("Product 1: %s\n", formatPrice(price1));
    printf("Product 2: %s\n", formatPrice(price2));
    printf("Product 3: %s\n", formatPrice(price3));
}
