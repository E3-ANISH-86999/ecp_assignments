#include<stdio.h>

void accept_arr(int arr[3][3]);
void print_arr(int arr[3][3]);


int main(){
	
	int arr[3][3];

	accept_arr(arr);
	print_arr(arr);


	return 0;
}


void accept_arr(int arr[3][3]){
	printf("Enter arr elements: \n");
	for(int i = 0 ; i < 3 ; i++ ){
		for(int j = 0; j < 3 ; j++){
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void print_arr(int arr[3][3]){
	
	printf("Array: \n");

	for(int i = 0 ; i < 3 ; i++ ){
		for(int j = 0; j < 3 ; j++){
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
}



