#include <stdio.h>

int main() {
    int Number;
    printf("Enter a number: ");
    scanf("%d", &Number);

    int count = 0;
    int currentNumber = Number + 1;

    printf("First 5 prime numbers after %d are:\n", Number);

    while (count < 5) {
        int isPrime = 1; 

        if (currentNumber <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= currentNumber; i++) {
                if (currentNumber % i == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", currentNumber);
            count++;
        }

        currentNumber++;
    }

    printf("\n");
    return 0;

}




