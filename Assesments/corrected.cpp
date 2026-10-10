/*The original code used integer division to calculate the mean, 
which could remove the decimal part. I changed `sum / 10` to `sum / 10.0f` 
to get the correct floating-point mean. I also calculated the midpoint using 
floating-point division to compare the mean correctly. 
These changes improve the accuracy of the program.*/

#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
    int max, min, sum = 0;
    float mean, mid;

    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 0; i < 10; i++)
    {
        sum = sum + a[i];

        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    mean = sum / 10.0f;
    mid = ((float)min + max) / 2.0f;

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nMean = %.2f\n", mean);

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    if(mean == mid)
        printf("\nMean is exactly midway between min and max.");
    else if(mean < mid)
        printf("\nMean is closer to minimum.");
    else
        printf("\nMean is closer to maximum.");
	 return 0;
}

