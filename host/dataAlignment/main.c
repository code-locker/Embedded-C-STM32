#include <stdio.h>
#include <stdint.h>

struct dataSet{
	char data1;
	int data2;
	char data3;
	short data4;
};

void display(struct dataSet *pData){
	printf("Example o structure pointer\n");
	printf("Data1: %X\n", pData->data1);
	printf("Data2: %X\n", pData->data2);
	printf("Data3: %X\n", pData->data3);
	printf("Data4: %X\n", pData->data4);
}
int main(){
	struct dataSet data;
	data.data1 = 0x20;
	data.data2 = 0x20242024;
	data.data3 = 0xCA;
	data.data4 = 0xABCD;

	uint32_t sizeOfStruct = sizeof(struct dataSet);
	uint8_t *ptr = (uint8_t *)&data;
	printf("Address\t\tdata\n");
	for (uint32_t i = 0; i < sizeOfStruct ;i++){
		printf("%p\t%X\n", ptr, *ptr);
		ptr++;
	}

	printf("Size of struct dataSet is %u\n", sizeOfStruct);

	display(&data);

	getchar();
	return 0;
}
