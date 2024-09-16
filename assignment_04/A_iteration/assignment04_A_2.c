#include<stdio.h>
#include<math.h>
int main(){
	
	int base, power, result;
	printf("Enter base: ");
	scanf("%d", &base);

	printf("Enter power: ");
	scanf("%d", &power);

	result = pow(base, power);
	printf("%d ^ %d = %d \n", base, power, result);



	return 0;
}

int power(int b, int p){
	return pow(b, p);
}


