#include <stdio.h>
char tasks[5][40];   

int main()
{
    int i;
   
    for(i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
    }

    printf("\n--- Task List ---\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}
