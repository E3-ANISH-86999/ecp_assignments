#include<stdio.h>

int main(){
	char arr[] = "Testing file handling.", ch;

	FILE *fp = fopen("file1.txt", "w");

	for(int i = 0 ; arr[i] != '\0' ; i++)
		fputc(arr[i], fp);

	fclose(fp);

	FILE *fg = fopen("file1.txt", "r");
	
	while((ch = fgetc(fg)) != EOF )
		printf("%c", ch); 
	printf("\n");
	
	fclose(fg);

	


	return 0;
}



