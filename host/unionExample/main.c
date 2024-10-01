#include <stdio.h>
#include <stdint.h>

union Address{
	uint16_t shortAddr;
	uint32_t longAddr;
};

int main(){
	union Address ad;
	ad.shortAddr = 0x1234;
	ad.longAddr = 0xABCDEFFF;
	printf("Short Address:%X\n",ad.shortAddr);
	printf("Long Address:%X\n",ad.longAddr);
	return 0;
}
