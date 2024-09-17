#include <stdio.h>

int main() {
	int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Unique pairs whose product is %d:\n", num);
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            int j = num / i;
            printf("%d * %d = %d\n", i, j, num);
        }
    }

    return 0;
}
