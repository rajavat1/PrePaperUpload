#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int randum = rand() % 10 + 1;
    int maxA = 3;
    int userNumber;
    printf("\n !! WELCOME TO THE GUESS SECRET NUMBER GAME !!\n");
    printf("\n You have %d attempts to guess the secret number between 1 and 10.\n", maxA);

    for (int a = 1; a <= maxA; a++)
    {
        printf("Attempt %d: \n Enter your guess Number : ", a);
        scanf("%d", &userNumber);

        if (userNumber == randum)
        {
            printf("Congratulations! You guessed the right number in %d attempts.\n", a);
            break;
        }
        else if (userNumber < randum)
        {
            printf("Try again. Your guess is too low.\n");
        }
        else
        {
            printf("Try again. Your guess is too high.\n");
        }

        if (a == maxA)
        {
            printf("Sorry, you've reached the maximum number of attempts. The secret number was %d.\n", randum);
        }
    }

    return 0;
}
