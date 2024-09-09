#include<stdio.h>

int main(){
	
	int a;

	printf("Enter a number: ");
	scanf("%d", &a);

	if( a > 0 )
		printf("%d is a positive number.\n", a);
	
	else if ( a < 0 ) 
		printf("%d is a negative number.\n", a);
	
	else 
		printf("It a zero.\n");





	return 0;
}



