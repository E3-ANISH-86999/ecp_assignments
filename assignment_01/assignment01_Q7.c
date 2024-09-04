#include<stdio.h>

int main(){
	
	int num,d1,d2,d3,d4;
	printf("Enter a 4 digit number: ");
	scanf("%d", &num);
	
	d1 = num % 10000;
	d1 /= 1000;
	d2 = num % 1000;
	d2 /= 100;
	d3 = num % 100;
	d3 /= 10;
	d4 = num % 10;
	
	printf("%d\t%d\t%d\t%d\n",d1,d2,d3,d4);
	
	printf("%d=%d + %d00 + %d0 + %d\n",num,d1*1000,d2,d3,d4);

	printf("%d%d%d%d\n",d4,d3,d2,d1);






	return 0;
}

