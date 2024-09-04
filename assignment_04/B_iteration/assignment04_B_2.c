#include<stdio.h>
int pow_of(int,int);
int iteration = 1;

int main(){

	int base, power;
	int res;

	printf("Enter base : ");
	scanf("%d", &base);

	printf("Enter power : ");
	scanf("%d", &power);

	printf("%d^%d = %d\n", base, power, pow_of(base, power));

	return 0;
}

int pow_of(int b, int p){
	if( iteration == p)
		return b;

	else
	{ 
		iteration++;
		return b * pow_of(b, p);
	}
}



