#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("All factors are: ", num);

    while (i <= num / 2) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
    return 0; 
}

