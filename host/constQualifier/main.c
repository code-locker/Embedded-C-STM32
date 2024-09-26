#include <stdio.h>
#include <stdint.h>

/*
 * Modifying the value of global const
 * has undefined behavior based on the target system
 * Example: In STM32 global const are stored in flash
 * memory which is write protected and modifying its
 * value has no effect. In other system it may crash.
 */
//uint8_t const data = 10;

int main(){
	uint8_t const data = 10;
	printf("Value of variable data is %d\n", data);
	// Cannot change value of variable data using variable name
	//throws compile time error
	//data = 20;
	uint8_t *ptr = &data;
	*ptr = 20;
	printf("Value of variable data is %d\n", data);
	return 0;
}
