#include<stdio.h>
int main() {
    int num1, num2;
    int rem;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

	int n1=num1;
	int n2=num2;

    while (num2 != 0) {
        rem = num1 % num2;
        printf("%d %% %d = %d\n", num1, num2, rem);
        num1 = num2;
        num2 = rem;
    }

    printf("GCD of %d and %d is %d\n", n1, n2, num1);

    return 0;
}





