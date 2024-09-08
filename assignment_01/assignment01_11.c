#include<stdio.h>
#include<limits.h>


int main(){
	
	printf("%-20s%-10s%-20s%-5s\n","Data Type","Size", "Format Specifier", "Range");
	printf("%-20s%-10lu%-20s%-5d to %-5d\n","Char",sizeof(char), "%c", SCHAR_MIN,SCHAR_MAX);
	printf("%-20s%-10lu%-20s%-5d to %-5d\n","unsigned char",sizeof(unsigned char), "%c", CHAR_MIN,UCHAR_MAX);
	printf("%-20s%-10lu%-20s%-5d to %-5d\n","short int",sizeof(short int), "%hd", SHRT_MIN,SHRT_MAX);
	printf("%-20s%-10lu%-20s%-5d to %-5d\n","unsigned short int",sizeof(unsigned short int), "%hu", CHAR_MIN,USHRT_MAX);
	printf("%-20s%-10lu%-20s%-5d to %-5d\n","int",sizeof(int), "%d", INT_MIN,INT_MAX);
	printf("%-20s%-10lu%-20s%-5d to %-5d\n","unsigned int",sizeof(unsigned int), "%u", CHAR_MIN,UINT_MAX);
	printf("%-20s%-10lu%-20s%-5ld to %-5ld\n","long int",sizeof(long int), "%ld", LONG_MIN,LONG_MAX);
	printf("%-20s%-10lu%-20s%-5d to %-5ld\n","long unsigned int",sizeof(long unsigned int), "%lu", CHAR_MIN,ULONG_MAX);
	
	return 0;
}





