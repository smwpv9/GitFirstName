/*
 * partC.c
 *
 *  Created on: Jan 26, 2017
 *      Author: smwpv9
 *      Shayne Wadle
 */

//preprocessor
#include <stdio.h>

int main(void)
{
	int one, oper, two, end = 0;
	do{
		printf("Please enter a basic equation\nForm: # _ #\n");

		one = getchar();
		oper = getchar();
		oper = getchar();
		two = getchar();
		two = getchar();
		end = getchar();
		if(end != '\n')
		{
			printf("Wrong format. Please enter again\n");
		}
	} while(end != '\n');

	one -= 48;
	if(one < 0 || 9 < one)
	{
		printf("Wrong format\n");
		main();
		return 0;
	}
	two -= 48;
	if(two < 0 || 9 < two)
	{
		printf("Wrong format\n");
		main();
		return 0;
	}

	switch( oper )
	{
	case '+':
		printf("Result: %d\n", one+two);
		break;
	case '-':
		printf("Result: %d\n", one-two);
		break;
	case '*':
		printf("Result: %d\n", one*two);
		break;
	case '/':
		if( two == 0)
		{
			printf("Cannot divide by zero\n");
			break;
		}
		printf("Result: %.2f\n", (float)one/(float)two);
		break;
	default:
		printf("Wrong format");
		main();
		break;
	}
	return 0;
}
