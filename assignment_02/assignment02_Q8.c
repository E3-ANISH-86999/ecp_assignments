#include<stdio.h>

int main(){
	int quant, unit = 5, discount, actual_p;

	printf("Enter quantity of units: ");
	scanf("%d", &quant);
	
	actual_p = quant*unit;
	if(quant <= 30)
		printf("Price of %d units is Rs.%d\n", quant, actual_p);
	else if(quant <=50){
		printf("Actual price of %d units is Rs.%d\n", quant, actual_p);
		printf("Discounted price of %d units is Rs.%.2f\n", quant,actual_p - (actual_p*0.1));
	}
	else{ 
		printf("Actual price of %d units is Rs.%d\n", quant, actual_p);
		printf("Discounted price of %d units is Rs.%.2f\n", quant, actual_p - (actual_p*0.15));
	}
	return 0;
}
 

