#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the X-coordinate :");
	scanf("%d",&x);
	printf("Enter the Y-coordinate :");
	scanf("%d",&y);

	if(x == 0 && y == 0)
	{
		printf("The number lies at the centre.\n");
	}
	else if(x>=0 && y>=0)
	{
		printf("The number lies in the first quadrant.\n");
	}
	else if(x<=0 && y >=0)
	{
		printf("The number lies in the second quadrant\n");
	}
	else if(x<=0 && y<=0)
	{
		printf("The number lies in third quadrant\n");
	}
	else if(x>=0 && y<=0)
	{
		printf("The number lies in fourth quadrant\n");
	}
	else 
	{
		printf("The number does not lie on any quadrant\n");
	}
}

