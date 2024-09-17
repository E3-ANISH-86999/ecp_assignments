#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if ( ch>=65 && ch<=90)
	{
		printf("%c is an upper case letter\n",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("%c is an lowercase letter\n",ch);
	}
	else if(ch>=48 && ch<= 57)
	{
		printf("%c is a digit\n",ch);
	}
	else if(ch == ' ')
	{
		printf("ch is space :(32).\n");
	}
	else if(ch == '\t')
	{
		printf("The character is tab(9).\n");
	}
	else if(ch == '\r')
	{
		printf("The character is carriage return:(13)");
	}
	else if(ch == '\n')
	{
		printf("The character is new line:(10)\n");
	}
	else
	{
		printf("Not a valid character\n");
	}
	return 0;
}


