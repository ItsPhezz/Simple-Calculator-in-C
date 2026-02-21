#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
	int choice; /* used when the user is selecting which operation they want */
	float num1; /* first number used in the operation */
	float num2; /* second number used in the operation */
	float result; /* result of the operation on the two numbers */
	bool isRunning; /* determines if the loop is running */

	isRunning = true; /* program starts running by default */

	while(isRunning != false) {

	printf("Welcome to the Calculator. What would you like to do?\n");
	printf("1) Addition\n");
	printf("2) Subtraction\n");
	printf("3) Multiplication\n");
	printf("4) Division\n");

	scanf("%d", &choice);

	switch(choice) {
		case 1:
			printf("you picked addition.\n");
			printf("what is your first number?\n");
			scanf("%f", &num1);
			printf("what is your second number?\n");
			scanf("%f", &num2);
			result = num1 + num2;
			printf("%.1f + %.1f = %.1f\n", num1, num2, result);
			break;
		case 2:
			printf("you picked subtraction.\n");
			printf("what is your first number?\n");
			scanf("%f", &num1);
			printf("what is your second number?\n");
			scanf("%f", &num2);
			result = num1 - num2;
			printf("%.1f - %.1f = %.1f\n", num1, num2, result);
			break;
		case 3:
			printf("you picked multiplication.\n");
			printf("what is your first number\n");
			scanf("%f", &num1);
			printf("what is your second number?\n");
			scanf("%f", &num2);
			result = num1 * num2;
			printf("%.1f * %.1f = %.1f\n", num1, num2, result);
			break;
		case 4:
			printf("you picked division.\n");
			printf("what is your first number?\n");
			scanf("%f", &num1);
			printf("what is your second number?\n");
			scanf("%f", &num2);

			if(num2 == 0) {
				printf("you cannot divide by zero!\n");
			
			} else {
			    result = num1 / num2;
			    printf("%.1f / %.1f = %.1f\n", num1, num2, result);
			}


			break;

		default:
			printf("Invalid Input! Please type a number between 1-4!\n");

			}

	printf("Do you want to calculate again? (Y)es or (N)o?\n");
	getchar();
	int answer = getchar();
	if(answer == 'Y' || answer == 'y') {
		// continue
	} else {
	    isRunning = false;
	}


    }

	return 0;
}
