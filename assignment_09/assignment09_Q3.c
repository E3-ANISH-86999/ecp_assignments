#include<stdio.h>

int main(){
	char str[8];
	FILE *fs = fopen("source3.txt", "r");
	FILE *fd = fopen("destination3.txt", "w");

	while(fgets(str, sizeof(str),fs) != NULL){
		printf("%s\n", str);
		fputs(str,fd);
	}
	
	fclose(fs);
	fclose(fd);
	return 0;
}




