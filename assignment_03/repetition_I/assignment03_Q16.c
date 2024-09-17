#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int magicNumber, guess, maxChances = 10;
    int chances = 0;

    srand(time(NULL));

    magicNumber = (rand() % 1000) + 1;

    printf("Welcome to the 'Guess the Magic Number' game!\n");
    printf("You have %d chances to guess it correctly.\n", maxChances);

    while (chances < maxChances) {
        printf("Enter your guess (1-1000): ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 1000) {
            printf("Invalid guess! Please enter a number between 1 and 1000.\n");
            continue;
        }

        if (guess == magicNumber) {
            printf("Congrats! You won.\n");
            break;
        } else if (guess < magicNumber) {
            printf("Left\n");
        } else {
            printf("Right\n");
        }

        chances++;
        printf("You have %d chances left.\n", maxChances - chances);
    }

    if (chances == maxChances && guess != magicNumber) {
        printf("Sorry, you've used all your chances. The magic number was %d.\n", magicNumber);
    }

    return 0;
}



