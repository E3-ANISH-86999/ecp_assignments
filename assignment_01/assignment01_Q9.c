#include<stdio.h>

int main(){

	//int f;
	float f;
	float c;
	
/* 
	printf("Enter temperature in fahrenheit : ");
	scanf("%d", &f);
	
	c = (5/(float)9) * (f-32);

	printf("Temperature in celsius = %.3f\n",c);
*/

	printf("Enter temperature in celsius : ");
	scanf("%f", &c);
	
	f = (9/(float)5)*c + 32 ;

	printf("Temperature in fahrenheit = %.1f\n",f);


	return 0;

}




