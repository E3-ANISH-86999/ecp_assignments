#include<stdio.h>

int main(){

	int a, b, c;

	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
		if ( a > c)
			printf("%d is maximum number.\n", a);
		else 
			printf("%d is maximum number.\n", c);
	
	else if (b > c)
		printf("%d is maximum number.\n", b);
	
	else 
		printf("%d is maximum number.\n", c);
		




	return 0;
}




