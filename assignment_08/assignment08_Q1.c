#include<stdio.h>

struct student{
	int roll_num;
	char name[20];
	float marks;
};


int main(){
	struct student s1;

	printf("Enter the student information: \n");
	printf("Roll number : ");
	scanf("%d", &s1.roll_num);
	printf("Name : ");
	scanf("%*c%[^\n]s", s1.name);
	printf("Marks : ");
	scanf("%f", &s1.marks);
	

	printf("%-10s\t%-20s\t%-5s\n", "Roll no.", "Name", "Marks");

	printf("%-10d\t%-20s\t%-5.2f\n", s1.roll_num, s1.name, s1.marks);
	


	return 0;
}





