#include<stdio.h>
int main()
{
	int month,year;
	printf("Enter a month: ");
	scanf("%d",&month);
	printf("Enter a year: ");
	scanf("%d",&year);
	 switch(month)
	 {
	case 1:
		 printf("jan has 31 days\n");
		 break;
	case 3:
		 printf("march has 31 days\n");
		 break;
	case 4: 
		 printf("april has 30 days\n");
		 break;
	case 5:
		 printf("may has 31 days \n");
		 break;

	case 6:
		 printf("june has 30 days\n");
		 break;

	case 7:
		 printf("july has 31 days\n");
		 break;
	case 8:
		 printf("august has 31 days\n");
		 break;
	case 9:
		 printf("sep has 30 days\n");
		 break;
	case 10:
		 printf("oct has 31 days\n");
		 break;

	case 11:
		 printf("nov has 30 days\n");
		 break;
	case 12:
		 printf("dec has 31 days\n");
		 break;
	case 2: if(year %4 == 0 && year %100 != 0 || year %400 ==  0)
		{
			 printf("feb has 29 days\n");
	 	}
		else 
		{
			 printf("feb has 28 days\n");
		}
		break;
	default:
	 	printf("Not a valid month\n");
	};

	return 0;
}
