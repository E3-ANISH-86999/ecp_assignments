#include<stdio.h>

void print_char(int, char);


int main(){
		
	int n;
	char ch;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Enter a character: ");
	scanf("%*c%c", &ch);

	print_char(n, ch);

	return 0;
}

void print_char(int n, char ch){
	int i = 0;
	while(i++ < n)
		printf("%c", ch);
	printf("\n");
	
}



