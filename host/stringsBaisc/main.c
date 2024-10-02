#include <stdio.h>
#include <stdint.h>

int main(){
	/* msg variable is stored in stack but msg is stored in ROM
	 * there will two copies of message
	 */
	char msg[]="Hello, How are you?";
	/* msgPtr variable is stored in stack but msg is stored in ROM
	 * there will only one copy of message. pointer contains the address
	 * of message stored in ROM
	 */
	char *msgPtr="I am good";

	printf("First message is %s\n", msg);
	printf("Address of first message is %p\n", msg);
	printf("Address of first message is %p\n", &msg);
	printf("Second message is %s\n", msgPtr);
	printf("Address of second message is %p\n", msgPtr);
	printf("Address of second message is %p\n", &msgPtr);
	msg[0]='h';
	/*
	 * Application may crash during ru-time or no effect to value
	 * since ROM data cannot be altered.
	 */
	//msgPtr[0]='i';

	printf("First message is after changes %s\n", msg);


	return 0;
}
