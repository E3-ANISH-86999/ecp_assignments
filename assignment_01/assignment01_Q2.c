#include<stdio.h>

int main(){
	long int number;

	printf("Enter a number:");
	scanf("%ld",&number);

	printf("Decimal of %ld is %ld\n", number, number);
	printf("Octal of %ld is %lo\n", number, number);
	printf("Hex value of %ld is %lx\n", number, number);
	printf("Character of %ld is %c\n", number, number);
	

	return 0;
}




