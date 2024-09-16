#include<stdio.h>

int main(){
	int num, n1, n2, n3, n4, n5, palindrome;

	printf("Enter a 5 digit number : ");
	scanf("%d", &num);

	n1 =  num % 100000;
	n1 /= 10000;
	
	n2 =  num % 10000;
	n2 /=1000;
	
	n3 =  num % 1000;
	n3 /= 100;
	
	n4 =  num % 100;
	n4 /= 10;
	
	n5 =  num % 10;
	
	palindrome = n5*10000 + n4*1000 + n3*100 + n2*10 + n1 ;
	printf("inverted: %d\n", palindrome);

	if (num == palindrome)
		printf("It is a palindrome.\n");
	
	else
		printf("Not a palindrome.\n");

	return 0;
}




