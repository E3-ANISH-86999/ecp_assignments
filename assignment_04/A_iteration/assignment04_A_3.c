#include<stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){
	int a, b;
	char op;

	printf("Enter two numbers:\n");
	printf("Number1 = ");
	scanf("%d", &a);
	printf("Number2 = ");
	scanf("%d", &b);
	printf("Enter operator = ");
	scanf("%*c%c", &op);

	switch(op){
		case '+':
			printf("%d + %d = %d\n", a, b, sum(a,b));
			break;

		case '-':
			printf("%d  %d = %d\n", a, b, sub(a,b));
			break;

		case '*':
			printf("%d * %d = %d\n", a, b, mul(a,b));
			break;

		case '/':
			if ( b == 0)
				printf("Can't divide by 0!\n");
			else
				printf("%d / %d = %d\n", a, b, div(a,b));
			break;

		default :
			printf("Invalid operator!\n");

	};

	return 0;
}


int sum(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mul(int a, int b){
	return a * b;
}

int div(int a, int b){
	return a / b;
}



