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

struct packet{
	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t longAddr	:8;
	uint32_t shortAddr	:2;
	uint32_t addrMode	:1;

};

int main(){
	uint32_t packetData;
	struct packet p;
	printf("Enter the 32-bits packet information in HEX to decode\n");
	scanf("%X",&packetData);
	if(!packetData){
		printf("It is not a valid packet\n");
		return 0;
	}
	printf("Packet data is %X\n", packetData);
	p.crc = (uint8_t) (packetData & 0x3);
	p.status = (uint8_t) ((packetData >> 0x3) & 0x1);
	p.payload = (uint16_t) ((packetData >> 3) & 0xFFF);
	p.bat = (uint8_t) (( packetData >> 15) &  0x7);
	p.sensor = (uint8_t) ((packetData >> 18) & 0x7);
	p.longAddr = (uint8_t) ((packetData >> 21) & 0xFF);
	p.shortAddr = (uint8_t) ((packetData >> 29) & 0x3);
	p.addrMode = (uint8_t) ((packetData >> 31) & 0x1);
	printf("Please find the decoded packet information.");
	printf("CRC:\t%#X\n",p.crc);
	printf("STATUS:\t%#X\n",p.status);
	printf("PAYLOAD:\t%#X\n",p.payload);
	printf("BAT:\t%#X\n",p.bat);
	printf("SENSOR:\t%#X\n",p.sensor);
	printf("LONG ADDR:\t%#X\n",p.longAddr);
	printf("SHORT ADDR:\t%#X\n",p.shortAddr);
	printf("ADDR Mode:\t%#X\n",p.addrMode);

	printf("Size of the structure to store 4 bytes data is %d bytes.\n", sizeof(p));
	return 0;
}
