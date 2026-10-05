#include<stdio.h>
#include<string.h>

main()
{
    char song[3][30] = {
        "Tum Hi Ho",
        "Kesariya",
        "Apna Bana Le"
    };

    char guess[30];
    int choice;

    printf("Guess the Song Game\n");

    printf("\nChoose a song number from 1 to 3:");
    scanf("%d", &choice);

    do
    {
        printf("\nEnter your guess: ");
        scanf(" %[^\n]", guess);

        if(strcmp(guess, song[choice - 1]) == 0)
        {
            printf("\nCorrect! You guessed it right!");
        }
        else
        {
            printf("\nWrong! Try again.");
        }

    }while(strcmp(guess, song[choice - 1]) != 0);
}
