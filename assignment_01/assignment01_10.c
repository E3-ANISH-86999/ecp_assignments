#include<stdio.h>
#include<math.h>


int main(){

	int a=3,b=4,c=5,s,area,x;

	s = a + b + c;

	x = s*(s-a)*(s-b)*(s-c) ;

	area = sqrt(double(x)) ;

	printf("Perimeter of triangle = %d\nArea of triangle = %d\n",s,area);




	return 0;

}


