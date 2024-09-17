#include<stdio.h>
int main()
{
	int num,i=2,flag=1;
	printf("Enter number : ");
	scanf("%d",&num);

	printf("%d = ",num);

	while(num > 1){

		if(num % i == 0){
		if (!flag) {
        	 printf(" * ");}
				
			printf("%d",i);
			num = num / i;
			flag=0;
		}
		else
		{
			i++;
		}
	}
	printf("\n");
	return 0;
}
