#include<stdio.h>

int main(){
 	
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);

	printf("Character entered = %c\n", ch);
	printf("Decimal of %c = %d\n", ch, ch);
	printf("Octal of %c = %o\n", ch, ch);
	printf("Hex of %c = %x\n", ch, ch);

	return 0;
}


