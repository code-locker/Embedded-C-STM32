#include <stdio.h>
#include <stdint.h>

typedef struct {
	char data1;
	int data2;
	char data3;
	short data4;
}dataSet_t;

int main(){
	dataSet_t data;
	data.data1 = 0x20;
	data.data2 = 0x20242024;
	data.data3 = 0xCA;
	data.data4 = 0xABCD;

	uint32_t sizeOfStruct = sizeof(dataSet_t);
	uint8_t *ptr = (uint8_t *)&data;
	printf("Address\t\tdata\n");
	for (uint32_t i = 0; i < sizeOfStruct ;i++){
		printf("%p\t%X\n", ptr, *ptr);
		ptr++;
	}


	printf("Size of struct dataSet is %u\n", sizeOfStruct);
	getchar();
	return 0;
}
