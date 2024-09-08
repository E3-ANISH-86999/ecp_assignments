#include<stdio.h>
#include<math.h>


int main(){

	int a,b,c,perimeter,s,x;
	double area;
	
	printf("Enter sides of triangle :\n");

	scanf("%d%d%d",&a,&b,&c);

	perimeter = a + b + c;
	
	s = perimeter / 2;
	
	x = s*(s-a)*(s-b)*(s-c) ;

	area = sqrt(x) ;

	printf("Perimeter of triangle = %d\nArea of triangle = %.2f\n",perimeter,area);




	return 0;

}


