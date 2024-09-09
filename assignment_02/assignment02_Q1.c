#include<stdio.h>

int main(){
	int n1, n2; 
	float result;

	printf("Enter two numbers: ");
	scanf("%d%d",&n1, &n2);

	if (n2 == 0 )
		printf("Can't divide by 0.");
	else
		printf("%d / %d = %.2f\n",n1, n2, (float)n1/n2);

	return 0;
}


