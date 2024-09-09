#include<stdio.h>

int main(){

	char ch;
	int a, i=1;

	printf("Enter a character: ");
	scanf("%c", &ch);

	printf("Enter a number: ");
	scanf("%d", &a);

	while ( i++ <= a){
		printf("%c", ch);
	}
	printf("\n");


	return 0;
}
