#include<stdio.h>

int main(int argc, char *argv[]){
	char str[8];
	FILE *fs = fopen(argv[1], "r");
	FILE *fd = fopen(argv[2], "w");

	while((fgets(str, sizeof(str),fs)) != NULL){
		printf("%s\n", str);
		fputs(str,fd);
	}
	
	fclose(fs);
	fclose(fd);
	return 0;
}




