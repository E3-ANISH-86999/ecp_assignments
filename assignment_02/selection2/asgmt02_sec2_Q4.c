#include<stdio.h>


int main()
{
    int day, month, year, h;

    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year (e.g., 2023): ");
    scanf("%d", &year);

    if (month < 3) {
        month += 12;
        year--;
    }

    // Zeller's Congruence formula
    h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    switch (h) {
        case 0: 
			printf("Saturday\n"); 
			break;
        case 1: 
			printf("Sunday\n"); 
			break;
        case 2: 
			printf("Monday\n"); 
			break;
        case 3: 
			printf("Tuesday\n"); 
			break;
        case 4: 
			printf("Wednesday\n"); 
			break;
        case 5: 
			printf("Thursday\n"); 
			break;
        case 6: 
			printf("Friday\n"); 
			break;
        default: 
			printf("Error: Invalid day\n"); 
			break;
    };

    return 0;


}
