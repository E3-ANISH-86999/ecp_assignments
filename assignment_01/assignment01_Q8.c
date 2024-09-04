#include<stdio.h>

int main(){
	
	int a,b,c;
	float result;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	result = (a + b + c)/(float) 3;

	printf("The average of three numbers is %.2f\n", result); 



	return 0;
}

