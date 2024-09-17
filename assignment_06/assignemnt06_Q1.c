#include<stdio.h>
#include<string.h>

int main(){
	char str1[20] = "Anish";
	//strlen
	printf("Length of str: %ld\n", strlen(str1));
	
	//strcpy
	char str2[20];
	strcpy(str2, str1);
	printf("st1 copy to str2 :%s\n", str2);
	
	//stcat
	char str3[20] = " Mhaske";
	strcat(str2, str3);
	printf("st3 append to str2 :%s\n", str2);

	//strcmp
	int res = strcmp(str2, str3);
	if (res == 0)
		printf("str2 == str3\n");
	else if(res > 0)
		printf("str2 > str3\n");
	else 
		printf("str2 < str3\n");

	//strchr	
	if(strchr(str2, 'M') == NULL )
		printf("Character not found\n");
	else 
		printf("Character found!\n");

	//strstr
	char str4[20] = "Rapid fire sheet";
	char str5[20] = "sheet";
	char *ptr;
	ptr = strstr(str4, str5);
	printf("%s\n", ptr);

	//strncpy
	char str6[20];
	char *ptr2;
	ptr2 = strncpy(str6, str4, 6);
	printf("%s\n", ptr2);
	
	//strncat
	char str7[20] = "DESD ";
	strncat(str7, str4, 10);
	printf("%s\n", str7);

	//strncmp
	char str8[20] = "Rapid sheet";
	int result = strncmp(str8, str4, 5);
	
	if (result == 0)
		printf("str8 == str4\n");
	else if(result > 0)
		printf("str8 > str4\n");
	else 
		printf("str8 < str\n");

	//strtok
	char str9[20] = "alsdkjfkfskhf";
	char *ptr3;
	ptr3 = strtok(str9, "f");
	printf("%s\n", ptr3);
	
	ptr3 = strtok(NULL, "f");
	printf("%s\n", ptr3);

	ptr3 = strtok(NULL, "f");
	printf("%s\n", ptr3);



	return 0;
}


