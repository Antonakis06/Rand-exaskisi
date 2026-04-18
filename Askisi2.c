#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int number = rand() % 50 + 1;
    int guess;

    printf("Guess my number (1-50): ");

    do
    {
        scanf("%d", &guess);

        if(guess < number)
            printf("Higher!\n");

        else if(guess > number)
            printf("Lower!\n");

        else
            printf("Found it!\n");

    } while(guess != number);

    return 0;
}