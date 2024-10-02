#include <stdio.h>
#include <stdint.h>

void display(uint8_t *ptr, int n){
	printf("Array elements are from display method :\n");
	for(uint32_t i = 0; i < n; i++){
		//pointer method of accessing array
		printf("%x\t", *(ptr+i));
	}
}

int main(){
	uint8_t someData[10];

	for(uint32_t i = 0; i < 10; i++){
		//short hand method of accessing array
		someData[i] = 0xff;
	}

	printf("Size of the array is %d bytes.\n", sizeof(someData));

	printf("Array elements are :\n");
	for(uint32_t i = 0; i < 10; i++){
		//pointer method of accessing array
		printf("%x\t", *(someData+i));
	}
	printf("\n");
	for(uint32_t i = 0; i < 10; i++){
			//short hand method of accessing array
			someData[i] = 0xaa;
		}

	int n = sizeof(someData)/sizeof(uint8_t);
	display(someData,n);
	return 0;
}
