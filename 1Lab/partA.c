/*
 * partA.c
 *
 *  Created on: Jan 26, 2017
 *      Author: smwpv9
 * Shayne Wadle
 */

//preprocessor
#define pi 3.14
#include <stdio.h>
#include <math.h>

int main(void)
{
	int radius = -1;
	while( radius < 0)
	{
		printf("Please enter the radius of a circle: ");
		scanf("%d", &radius);
		if(radius < 0)
			printf("The number cannot be negative.\n");
	}
	printf("A circle with radius %d has an area of %.2f\n", radius, pi*pow(radius,2.0));
	return 0;
}

