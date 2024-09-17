/*#include<stdio.h>
int main()
{
	int mon,year;
	printf("enter a month");
	scanf("%d",&mon);
	

	if(((mon == 2)&& (year % 400 == 0)) ||  ((year % 100 != 0) && (year %4 == 0))  )  
	{
		printf("28/29");
	}
	else if(mon == 1)
	{
		printf("31");
	}
	else if(mon == 3)
	{
		printf("31");
	}
	else if(mon == 4)
	{
		printf("30");
	}
	else if(mon == 5)
	{ 
		printf("31");
	}
	else if(mon == 6)
	{
		printf("30");
	}
	else if(mon == 7)
	{
		printf("31");
	}
	else if(mon == 8)
	{
		printf("31");
	}
	else if(mon == 9)
	{
		printf("30");
	}
	else if(mon == 10)
	{
		printf("31");
	}
	else if(mon == 11)
	{
		printf("30");
	}
	else if(mon == 12)
	{
		printf("31");
	}
	else if(((mon == 2)&& (year % 400 == 0)) ||  ((year % 100 != 0) && (year %4 == 0))  )  
	{
		printf("year is leap year");
	}
	else 
	{
		printf("year is not leap year");
	}

	return 0;
}
*/



#include<stdio.h>
int main()
{
	int month,year;
	printf("Enter month: ");
	scanf("%d",&month);
	printf("Enter year: ");
	scanf("%d",&year);

	if(month == 2)
	{
		if((year %4 == 0) && (year %100 != 0) || (year %400 ==  0)){
			printf("It is leap year:\n");
			printf("There are 29 days in this month\n");
		}
		else
			printf("There are 29 days in this month\n");
		
	}
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		printf("There are 31 days in this month\n");
	else
		printf("There are 30 days in this month\n");

	return 0;
}

