#include<stdio.h>

int main(){
	
	int a, b;

	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
/*
	//max number using if-else
	if ( a > b )
		printf("%d is maximum number.\n", a);
	
	else if (a < b )
		printf("%d is maximum number.\n", b);
	
	else
		printf("%d is equal to %d\n", a, b);

*/

	//max number using conditional operator
	
	( a > b ) ? printf("%d is maximum number.\n", a) : printf("%d is maximum number.\n", b);


	return 0;

}






