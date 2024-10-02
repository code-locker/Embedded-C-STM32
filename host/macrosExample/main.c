#include <stdio.h>

#define	PI_VALUE	(3.1415f)
#define AREA_OF_CIRCLE(r)	PI_VALUE*r*r
#define AREA_OF_CIRCLE_(r)	(PI_VALUE)*(r)*(r)

int main(){
	printf("Area of a circle with radius 2cm is %f\n", AREA_OF_CIRCLE(2));

	//Example of poor usage of macros

	printf("Area of a circle with radius 2cm is %f(Wrong results)\n", AREA_OF_CIRCLE(1+1));

	printf("Area of a circle with radius 2cm is %f\n", AREA_OF_CIRCLE_(1+1));
	return 0;
}
