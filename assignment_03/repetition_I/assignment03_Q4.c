#include<stdio.h>

int main(){
	int n , fact=1, i = 1;

	printf("Enter a number :");
	scanf("%d", &n);

	while(i <= n){
		printf("%d ", i);
		if( i != n )
			printf("* ");
		fact = fact*i;
		i++;
	}
	printf(" = %d\n", fact);

	return 0;
}



