// Program to decode 32 bit values using structure

#include <stdio.h>
#include <stdint.h>

/*
 * 32-bit fields
 * 2-bits CRC
 * 1-bit Status
 * 12-bits Payload
 * 3-bits BAT
 * 3-bit SENSOR
 * 8-bit LONG ADDR
 * 2-bits SHORT ADDR
 * 1-bit ADDR Mode
 */
union Packet{
	uint32_t packetData;

	struct {
		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t longAddr	:8;
		uint32_t shortAddr	:2;
		uint32_t addrMode	:1;

	}packetFields;
};

int main(){
	union Packet p;
	printf("Enter the 32-bits packet information in HEX to decode\n");
	scanf("%X",&p.packetData);
	if(!p.packetData){
		printf("It is not a valid packet\n");
		return 0;
	}
	printf("Packet data is %X\n", p.packetData);
	printf("Packet information.");
	printf("CRC:\t%#X\n",p.packetFields.crc);
	printf("STATUS:\t%#X\n",p.packetFields.status);
	printf("PAYLOAD:\t%#X\n",p.packetFields.payload);
	printf("BAT:\t%#X\n",p.packetFields.bat);
	printf("SENSOR:\t%#X\n",p.packetFields.sensor);
	printf("LONG ADDR:\t%#X\n",p.packetFields.longAddr);
	printf("SHORT ADDR:\t%#X\n",p.packetFields.shortAddr);
	printf("ADDR Mode:\t%#X\n",p.packetFields.addrMode);

	printf("Size of the structure to store 4 bytes data is %d bytes.\n", sizeof(p));
	return 0;
}
