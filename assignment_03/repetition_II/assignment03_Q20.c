//#include <stdio.h>
/*
int main() {
    int i, j;
    int isPrime; 

    printf("Prime numbers between 1 and 100 are:\n");

    for (i = 2; i <= 100; i++) {
        isPrime = 1; 

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
*/



#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result;
    int numDigits, i;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) {
        originalNum = num;
        result = 0;

        numDigits = (num < 10) ? 1 : (num < 100) ? 2 : 3;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, numDigits);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}









