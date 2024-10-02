#include <stdio.h>
#include <stdint.h>

void readArrayElements(uint32_t *ptr, int n){
	for(uint32_t i = 0; i < n; i++){
		scanf("%d", (ptr+i));
	}
}

void display(uint32_t *ptr, int n){
	for(uint32_t i = 0; i < n; i++){
		printf("%4d ", *(ptr+i));
	}
	printf("\n");
}

void swap(uint32_t *ptrA, uint32_t *ptrB, uint32_t itemA, uint32_t itemB){
	int len = (itemA < itemB) ? itemA : itemB;
	for(uint32_t i = 0; i< len; i++){
		int temp = *(ptrA + i);
		*(ptrA + i) = *(ptrB + i);
		*(ptrB + i) = temp;
	}
}

int main(){
	uint32_t itemA,itemB;
	printf("Enter the size of arrayA and arrayB\n");
	scanf("%d %d", &itemA,&itemB);
	uint32_t arrayA[itemA], arrayB[itemB];

	printf("Enter the arrayA elements:");
	readArrayElements(arrayA,itemA);

	printf("Enter the arrayB elements:");
	readArrayElements(arrayB,itemB);

	printf("Before Swap elements of arrayA and arrayB\n");
	display(arrayA,itemA);

	display(arrayB,itemB);

	swap(arrayA,arrayB,itemA,itemB);

	printf("After Swap elements of arrayA and arrayB\n");
	display(arrayA,itemA);

	display(arrayB,itemB);

	return 0;
}
