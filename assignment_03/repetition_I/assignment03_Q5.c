#include<stdio.h>

int main(){
	int n , fact=1;

	printf("Enter a number :");
	scanf("%d", &n);

	while(n != 0){
		printf("%d ", n);
		if( n != 1 )
			printf("* ");
		fact = fact*n;
		n--;
	}
	printf(" = %d\n", fact);

	return 0;
}



