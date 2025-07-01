// peripherals.c
#include "peripherals.h"

const uint32_t RCU_BASE = 0x40021000U;
RCU_TypeDef* const RCU = (RCU_TypeDef*)(RCU_BASE);

const uint32_t FMC_BASE = 0x40022000U;
FMC_TypeDef* const FMC = (FMC_TypeDef*)(FMC_BASE);

const uint32_t GPIOA_BASE = 0x40010800U;
GPIO_TypeDef* const GPIOA = (GPIO_TypeDef*)(GPIOA_BASE);





/*
SPI0 base address: 0x4001 3000
SPI1 / I2S1 base address: 0x4000 3800
SPI2 / I2S2 base address: 0x4000 3C00
*/
const uint32_t SPI0_BASE = 0x0x40013000U;

const uint32_t SPI1_I2S1_BASE = 0x40003800U;

const uint32_t SPI2_I2S2_BASE = 0x40003C00U;





/*
Register definition
DMA0 base address: 0x4002 0000
DMA1 base address: 0x4002 0400
Note: For DMA1 having 5 channels, all bits related to channel 5 and channel 6 in the following
registers are not suitable for DMA1.
*/
const uint32_t DMA0_BASE = 0x40020000U;
const uint32_t DMA1_BASE = 0x40020400U;



/*
Register definition
TIMER5 base address: 0x4000 1000
TIMER6 base address: 0x4000 1400
*/

const uint32_t TIMER5_BASE = 0x40001000;
const uint32_t TIMER6_BASE = 0x40001400;
