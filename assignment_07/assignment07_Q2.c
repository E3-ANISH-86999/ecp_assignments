#include<stdio.h>

void accept_arr(int arr[3][3]);
void print_arr(int arr[3][3]);
void add_func(int arr[3][3], int arr2[3][3], int result_arr[3][3]);
void sub_func(int arr[3][3], int arr2[3][3], int result_arr[3][3]);
void mul_func(int arr[3][3], int arr2[3][3], int result_arr[3][3]);


int main(){
	
	int arr[3][3], arr2[3][3], result_arr[3][3];
	
	printf("Enter first array: \n");
	accept_arr(arr);
	print_arr(arr);
	
	printf("Enter second array: \n");
	accept_arr(arr2);
	print_arr(arr2);


	printf("Matrix addition is: \n");
	add_func(arr, arr2, result_arr);	
	print_arr(result_arr);

	printf("Matrix subtraction is: \n");
	sub_func(arr, arr2, result_arr);
	print_arr(result_arr);
	
	printf("Matrix multiplication is: \n");
	mul_func(arr, arr2, result_arr);
	print_arr(result_arr);

	return 0;
}


void accept_arr(int arr[3][3]){
	for(int i = 0 ; i < 3 ; i++ ){
		for(int j = 0; j < 3 ; j++){
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void print_arr(int arr[3][3]){
	

	for(int i = 0 ; i < 3 ; i++ ){
		for(int j = 0; j < 3 ; j++){
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
}


void add_func(int arr[3][3], int arr2[3][3], int result_arr[3][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			result_arr[i][j] = arr[i][j] + arr2[i][j];
		}
	}
}


void sub_func(int arr[3][3], int arr2[3][3], int result_arr[3][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			result_arr[i][j] = arr[i][j] - arr2[i][j];
		}
	}
}


void mul_func(int arr[3][3], int arr2[3][3], int result_arr[3][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			result_arr[i][j] = arr[i][j] * arr2[j][i];
		}
	}
}


