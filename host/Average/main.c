/*
 * main.c
 *
 *  Created on: Dec 28, 2023
 *      Author: abhishek
 */

#include <stdio.h>

int main(void){
	float numA = 0, numB = 0, numC = 0;
	float average  =0;

	printf("Enter first number:");
	fflush(stdout);
	scanf("%f",&numA);
	printf("Enter second number:");
	scanf("%f",&numB);
	printf("Enter third number:");
	scanf("%f",&numC);
	average = (numA + numB + numC)/3;
	printf("Average is = %f\n", average);
	return 0;
}


