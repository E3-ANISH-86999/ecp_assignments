//Q7: Number of days in year


#include<stdio.h>

/*
// a. Without using logical operator
int main(){
	
	int days = 365;
	int year;

	printf("Enter year: \n");
	scanf("%d", &year);

	if (year % 4 == 0){
		++days;
		printf("%d is a leap year.\nYear %d has %d days.\n", year, year, days);
	}
	else if (year % 400 == 0){
		++days;
		printf("%d is a leap year.\nYear %d has %d days.\n", year, year, days);
	}
	else if(year % 100 != 0){
		++days;
		printf("%d is a leap year.\nYear %d has %d days.\n", year, year, days);
		}
	else 
			printf("Year %d has %d days.\n", year, days);

	
	return 0;
}



// b. Using logical operator
int main(){
	
	int days = 365;
	int year;

	printf("Enter year: \n");
	scanf("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		printf("%d is a leap year.\nYear %d has %d days.\n", year, year, ++days);
		
	else 
		printf("Year %d has %d days.\n", year, days);

	
	return 0;
}
*/


//c. Using conditional operator


int main(){
	
	int days = 365;
	int year;

	printf("Enter year: \n");
	scanf("%d", &year);

	((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))?(printf("%d is a leap year.\nYear %d has %d days.\n", year, year, ++days)):(printf("Year %d has %d days.\n", year, days));

	
	return 0;
}




