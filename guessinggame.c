//
// Created by xmrhk on 10.08.2024.
//

#include "guessinggame.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int guessinggame()
{
    int number, guess = 0, attempts = 0;
    int lower = 1, upper = 100;

    srand(time(NULL));
    number = (rand() % (upper - lower + 1)) + lower;

    int numberFirst = number%10;
    int numberSecond = number/10;
    int guessFirst;
    int guessSecond;

    while(1)
    {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess);

        guessFirst = guess%10;
        guessSecond = guess/10;

        attempts++;

        if (guess == number)
        {
            printf("Congrats, you've found the number in %d attempts!\n", attempts);
            break;
        }
        if (guessFirst==numberFirst || guessSecond==numberSecond)
        {
            printf("You are very close!\n");
        }
        else if (guessFirst==numberSecond || guessSecond==numberFirst)
        {
            printf("You are close!\n");
        }
        else
        {
            printf("Try again!\n");
        }
    }
    return attempts;

}