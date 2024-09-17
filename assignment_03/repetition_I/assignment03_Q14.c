#include<stdio.h>

int main()
{
	int num , count=0;
	printf("Enter the number to check whether it is prime or not: ");
	scanf("%d",&num);

	for(int i=1 ; i<=num ; i++)
	{
		if(num % i == 0)
		{
			count++;
		}
	}
	if(count == 2){
		printf("%d is Prime number\n", num);
		}
	else{
		printf("%d is not Prime number\n", num);
	}
	return 0;
}



