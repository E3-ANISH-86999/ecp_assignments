#include<stdio.h>

int main(){
	
	int a, i=0;

	printf("Enter a number: ");
	scanf("%d", &a);

	while(i++ <10){
		printf("%d x %d = %d\n", a, i, a*i);

	}

	return 0;

}




