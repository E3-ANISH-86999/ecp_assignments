#include<stdio.h>
#include<math.h>

int main(){

	int num, rem = 0, sum = 0, rev = 0;
	int choice;

	printf("Enter a number:");
	scanf("%d", &num);
	int ognum = num;

	printf("Select choice :0.Exit\n1.Sum of digits of integer\n2.Reverse the number\n3.Check numeric palindrome\n4.Check Armstrong number\n");
	scanf("%d", &choice);

	switch(choice){
		
		case 0 : 
			printf("Exited!\n");
			break;

		case 1 : 
			while (num != 0 ){
				rem = num % 10;
				sum += rem;
				num /= 10;

			}
			printf("Sum of digits is %d\n",sum);
			break;

		case 2 :
			while (num != 0 ){
				rem = num % 10;
				rev = rev * 10 + rem;
				num /= 10;
			}
			printf("Reverse of digits is %d\n",rev);
			break;

		case 3 :
			while (num != 0) {
            	rem = num % 10;
                rev = rev * 10 + rem;
                num /= 10;
                }
				if(ognum == rev)
					printf("It is a Palindrome number\n");
				else
					printf("It is not a Palindrome number\n");
				break;

		case 4:
			int temp=num, digits = 0, mod, arm = 0;
			while(num != 0){
				num = num / 10;
				digits++;
			}

			while(temp !=0)
			{
				mod = temp % 10;
     			arm += pow(mod, digits);
        		temp /= 10;
   			}
            if (ognum == arm) 
            	printf("It is an Armstrong number\n");
            else 
                printf("It is not an Armstrong number\n");
          
                break;

		default:
			printf("Invalid choice!\n");
	};
	return 0;
}


	
