#include<stdio.h>
void accept_input(int *, int *);
int swap(int *, int *);
void pf(int, int);
int flag = 0; // to decide what to print

int main(){
	int n1, n2;

	accept_input(&n1, &n2);
	pf(n1,n2);
	swap(&n1,&n2);
	pf(n1,n2);

	return 0;

}

//take input from user
void accept_input(int *pn1, int *pn2){
	printf("Enter two numbers :");
	scanf("%d%d", pn1, pn2);
}

//perform swapping
int swap(int *pn1,int *pn2){	
	int temp;
	temp = *pn1;
	*pn1 = *pn2;
	*pn2 = temp;
	flag =1;
}

//print the result
void pf(int num1,int num2){
	if (flag == 0)
		printf("Before swap :: n1 = %d, n2 = %d\n", num1, num2);
	else 
		printf("After swap  :: n1 = %d, n2 = %d\n", num1, num2);

}

