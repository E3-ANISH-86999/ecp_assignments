#include<stdio.h>
#include<math.h>

int main()
{
	int base, index , result =1;

	printf("Base : ");
	scanf("%d",&base);
	
	printf("Index : ");
	scanf("%d",&index);

	for (int i = 1; i <= index; i++)
	{
        result *= base;
    }

    printf("%d^%d = %d\n", base, index, result);
}




