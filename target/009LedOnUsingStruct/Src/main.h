/*
 * main.h
 *
 *  Created on: Oct 1, 2024
 *      Author: abhishek
 */

#ifndef MAIN_H_
#define MAIN_H_

typedef struct{
	uint32_t gpioa_en		:1;
	uint32_t gpiob_en		:1;
	uint32_t gpioc_en		:1;
	uint32_t gpiod_en		:1;
	uint32_t gpioe_en		:1;
	uint32_t gpiof_en		:1;
	uint32_t gpiog_en		:1;
	uint32_t gpioh_en		:1;
	uint32_t gpioi_en		:1;
	uint32_t gpioj_en		:1;
	uint32_t gpiok_en		:1;
	uint32_t reserved1		:1;
	uint32_t crc_en			:1;
	uint32_t reserved2		:5;
	uint32_t bkpsramen		:1;
	uint32_t reserved		:1;
	uint32_t ccmdataramen	:1;
	uint32_t dma1_en		:1;
	uint32_t dma2_en		:1;
	uint32_t dma2d_en		:1;
	uint32_t reserved3		:1;
	uint32_t eth_macen		:1;
	uint32_t eth_mactxen	:1;
	uint32_t eth_macrxen	:1;
	uint32_t eth_macptpen	:1;
	uint32_t otghs_en		:1;
	uint32_t otghsulpi_en	:1;
	uint32_t 				:1;
}RCC_AHB1ENR_t;

typedef struct{
	uint32_t moder_0		:2;
	uint32_t moder_1		:2;
	uint32_t moder_2	 	:2;
	uint32_t moder_3		:2;
	uint32_t moder_4		:2;
	uint32_t moder_5		:2;
	uint32_t moder_6		:2;
	uint32_t moder_7		:2;
	uint32_t moder_8		:2;
	uint32_t moder_9		:2;
	uint32_t moder_10		:2;
	uint32_t moder_11		:2;
	uint32_t moder_12		:2;
	uint32_t moder_13		:2;
	uint32_t moder_14		:2;
	uint32_t moder_15		:2;
}GPIOx_MODER_t;

typedef struct{
	uint32_t moder_0		:1;
	uint32_t moder_1		:1;
	uint32_t moder_2	 	:1;
	uint32_t moder_3		:1;
	uint32_t moder_4		:1;
	uint32_t moder_5		:1;
	uint32_t moder_6		:1;
	uint32_t moder_7		:1;
	uint32_t moder_8		:1;
	uint32_t moder_9		:1;
	uint32_t moder_10		:1;
	uint32_t moder_11		:1;
	uint32_t moder_12		:1;
	uint32_t moder_13		:1;
	uint32_t moder_14		:1;
	uint32_t moder_15		:1;
	uint32_t reserved		:16;
}GPIOx_ODR_t;
#endif /* MAIN_H_ */
