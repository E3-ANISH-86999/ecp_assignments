#include<stdio.h>


typedef struct student{
	int rollno;
	char name[10];
	int standard;
	float marks;
}stud_t;

void accept_info(stud_t *);
void view_info(stud_t *);

void add_info(stud_t *);

int main(){
	stud_t stud;	

	accept_info(&stud);
	add_info(&stud);
	view_info(&stud);

	return 0;
}

void accept_info(stud_t *stud){
	printf("Enter student information: {Roll no. Name Standard Marks}");
	scanf("%d %s %d %f", &stud->rollno, stud->name, &stud->standard, &stud->marks);
	
	//printf("%d %s %d %f", stud->rollno, stud->name, stud->standard, stud->marks);

}

void add_info(stud_t *stud){
	FILE *fs = fopen("student1.txt", "w");	
	fprintf(fs, "%d %s %d %f", stud->rollno, stud->name, stud->standard, stud->marks);
	fclose(fs);
}


void view_info(stud_t *stud){
	FILE *fs = fopen("student1.txt", "r");	
	fscanf(fs,"%d %s %d %f", &stud->rollno, stud->name, &stud->standard, &stud->marks);
	printf("%d %s %d %.2f\n", stud->rollno, stud->name, stud->standard, stud->marks);
	fclose(fs);
}

