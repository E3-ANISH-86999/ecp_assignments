/*
	Sorting using selection sort alogrithm
*/


#include<stdio.h>
void take_input(int farr[] ,int);
void print_func(int farr[], int);
void swap(int *, int *);
int flag;                         //to decide what to print

int main(){
	int arr[5];
	take_input(arr, 5);
	print_func(arr,5);

	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if (arr[i] > arr[j]){
				swap(&arr[i], &arr[j]);
			}
		}
	}
	flag = 1;
	print_func(arr,5);

	return 0;
}

//Swapping of numbers
void swap(int *ptr1, int *ptr2){
	int temp = 0;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;	
}

//Take input from user and store it to array
void take_input(int farr[], int len){	
	printf("Enter 5 elements in array:");
	for(int i=0; i<len; i++)
		scanf("%d", &farr[i]);
} 

//Print the input and result 
void print_func(int farr[], int len){
	if(flag == 0){
		printf("Before sorting :: ");
		
		for(int i=0; i<len; i++){
			printf("%-4d", farr[i]);
		}
		printf("\n");
	}
	else
	{
		printf("After sorting  :: ");
		for(int i=0; i<len; i++){
			printf("%-4d", farr[i]);
		}
		printf("\n");
	}
}


