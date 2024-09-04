#include<stdio.h>

// Function using global variable----------------------------->
/*
int sum, product;
int operation_func(int,int);
void print_func(int, int);

int main(){
	int n1, n2;
	printf("Enter two numbers :");
	scanf("%d%d", &n1, &n2);

	operation_func(n1,n2);
	print_func(n1, n2);
	return 0;
}

int operation_func(int num1, int num2){

	sum = num1 + num2;
	product = num1 * num2;
}

void print_func(int num1, int num2){

	printf("%d + %d = %d\n",num1, num2, sum); 

	printf("%d * %d = %d\n",num1, num2, product); 
*/

//------------------------------------------------------------>

//function using pointers(without golbal variables)----------->

int operation_func(int,int,int *, int *);
void print_func(int, int,int,int);

int main(){
	int n1, n2,sum,prod;
	printf("Enter two numbers :");
	scanf("%d%d", &n1, &n2);

	operation_func(n1,n2,&sum,&prod);
	print_func(n1, n2,sum,prod);
	return 0;
}

int operation_func(int num1, int num2,int *psum, int *pprod){

	*psum = num1 + num2;
	*pprod= num1 * num2;
}

void print_func(int num1, int num2, int sum, int product){

	printf("%d + %d = %u\n",num1, num2, sum); 

	printf("%d * %d = %u\n",num1, num2, product); 

}

