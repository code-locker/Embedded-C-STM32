/*
 * main.c
 *
 *  Created on: Dec 28, 2023
 *      Author: abhishek
 */

#include <stdio.h>

int main(void){
	char variable = 100;

	printf("Address of the variable is %p\n", &variable);

	char *ptr = (char*) &variable;

	char byteData = *ptr;

	printf("Value stored at %p is %d\n", ptr, byteData);

	*ptr = 65;

	byteData = variable;

	printf("Value stored at %p is %d\n", ptr, byteData);

	return 0;
}
