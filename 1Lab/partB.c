/*
 * partB.c
 *
 *  Created on: Jan 26, 2017
 *      Author: smwpv9
 *      Shayne Wadle
 */

//preprocessor
#include <stdio.h>
#include <math.h>

int main(void)
{
	float buy = 0, sell =0;
	float dif = 0;
	printf("Please enter the cost price: $");
	scanf("%f",&buy);
	printf("Please enter the sell price: $");
	scanf("%f",&sell);


	if(buy < sell) //profit
	{
		dif = sell - buy;
		printf("The merchant has made profit\n$%.2f worth\n", dif);
	}
	else//loss
	{
		dif = buy - sell;
		printf("The merchant incurred loss\n$%.2f worth\n", dif);
	}
	return 0;
}
