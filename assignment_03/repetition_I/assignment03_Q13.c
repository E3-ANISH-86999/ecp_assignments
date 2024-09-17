#include<stdio.h>
int main()
{
	int n;
	int res = 0; 
	printf("Enter the number upto fibonacci series shall be printed : ");
	scanf("%d",&n);

	int n1 = 1, n2 = 1;
	printf("%d",n1);
	printf(", %d",n2);

	for(int i=3 ; i<=n ; i++)
	{
		res = n1 + n2;
		
		printf(", %d",res);
	
		n1 = n2;
		n2 = res;
	}
	printf("\n");

	return 0;
}





