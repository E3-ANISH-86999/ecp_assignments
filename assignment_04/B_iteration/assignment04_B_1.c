#include<stdio.h>
int fact_func(int);
void print_func(int, int);


int main(){
	int res;
	int n = 5;
	res = fact_func(n);
	print_func(n,res);

	return 0;
}

int fact_func(int num){
	if(num == 1)
		return 1;
	else
		return num * fact_func(num-1);
}

void print_func(int num, int result){
	printf("%d! = %d\n", num, result);
}



