#include <stdio.h>
#include <stdint.h>

struct carRecord{
	uint32_t carModel;
	uint32_t carPriceInLakhs;
	uint16_t carMaxSpeedInKmph;
	float carWeightInKgs;
};

int main(){

	//structure initialization using c89 standard
	struct carRecord Ford = { 2021, 18, 120, 170 };
	struct carRecord Honda = { 2020, 10, 90, 120 };

	//structure initialization using c99 standard
	struct carRecord BMW = {
			.carPriceInLakhs = 30,
			.carMaxSpeedInKmph = 200,
			.carWeightInKgs = 200,
			.carModel = 2024
	};

	printf("BMW car details:\n");
	printf("Model:%u\n", BMW.carModel);
	printf("Price:%u Lakhs\n", BMW.carPriceInLakhs);
	printf("Speed:%u Kmph\n", BMW.carMaxSpeedInKmph);
	printf("Weight:%f Kg\n", BMW.carWeightInKgs);

	BMW.carWeightInKgs = 201;
	printf("BMW car details(After modification):\n");
	printf("Model:%u\n", BMW.carModel);
	printf("Price:%u Lakhs\n", BMW.carPriceInLakhs);
	printf("Speed:%u Kmph\n", BMW.carMaxSpeedInKmph);
	printf("Weight:%f Kg\n", BMW.carWeightInKgs);

	printf("size of struct carRecord is %u\n", sizeof(struct carRecord));
	return 0;
}
