#include<stdio.h>
int fact_func(int);
void print_func(int,int);


int main(){
	int n = 7;
	
	print_func(n,fact_func(n));

	return 0;
}

int fact_func(int num){
	int result = 1;
	for(int i=1; i<=num; i++){
		result *= i ;
	}       
	return result;
}

void print_func(int num,int res){

	printf("%d! = %d\n", num, res); 

}



