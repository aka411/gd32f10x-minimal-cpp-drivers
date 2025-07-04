#pragma once
#include <cstdint>







/****************************
     Register definition

GPIOA base address: 0x4001 0800
GPIOB base address: 0x4001 0C00
GPIOC base address: 0x4001 1000
GPIOD base address: 0x4001 1400
GPIOE base address: 0x4001 1800
GPIOF base address: 0x4001 1C00
GPIOG base address: 0x4001 2000


AFIO base address: 0x4001 0000

*******************************/


typedef struct
{

  volatile uint32_t CTL0; // Port control register 0 (GPIOx_CTL0, x=A..G)
//Address offset: 0x00
//Reset value: 0x4444 4444
//This register has to be accessed by word (32-bit).


 volatile uint32_t CTL1; // Port control register 1 (GPIOx_CTL1, x=A..G)
//Address offset: 0x04
//Reset value: 0x4444 4444
//This register has to be accessed by word (32-bit)



volatile uint32_t ISTAT;//Port input status register (GPIOx_ISTAT, x=A..G)
//Address offset: 0x08
//Reset value: 0x0000 XXXX
//This register has to be accessed by word (32-bit).



volatile uint32_t OCTL;//  Port output control register (GPIOx_OCTL, x=A..G)
//Address offset: 0x0C
//Reset value: 0x0000 0000
//This register has to be accessed by word(32-bit).


/*
Port bit operate register (GPIOx_BOP, x=A..G)
Address offset: 0x10
Reset value: 0x0000 0000
This register has to be accessed by word(32-bit).



Port bit clear register (GPIOx_BC, x=A..G)
Address offset: 0x14
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit).



Port configuration lock register (GPIOx_LOCK, x=A..G)
Address offset: 0x18
Reset value: 0x0000 0000
This register has to be accessed by word(32-bit).

*/


}GPIO_TypeDef;





const uint32_t GPIOA_BASE = 0x40010800U;
const uint32_t GPIOB_BASE = 0x40010C00U;
const uint32_t GPIOC_BASE = 0x40011000U;
const uint32_t GPIOD_BASE = 0x40011400U;


//GPIO_TypeDef* const GPIOA = (GPIO_TypeDef*)(GPIOA_BASE);




/*
Pin 0 configuration bits

These bits are set and cleared by software

Input mode ( MD[1:0] =00)
00: Analog mode
01: Floating input
10: Input with pull-up / pull-down
11: Reserved

Output mode ( MD[1:0] >00)
00: GPIO output with push-pull
01: GPIO output with open-drain
10: AFIO output with push-pull
11: AFIO output with open-drain

MD0[1:0] Port 0 mode bits
These bits are set and cleared by software
00: Input mode (reset state)
01: Output mode(10MHz)
10: Output mode(2MHz)
11: Output mode(50MHz)
*/

/*
SPI0_REMAP = 0
PA4(SPI0_NSS)
PA5(SPI0_SCK)
PA6(SPI0_MISO)
PA7(SPI0_MOSI)
*/

const uint32_t GPIO_CTL0_PIN_0_CB_MASK = (0x03U << 2U);
const uint32_t GPIO_CTL0_PIN_0_CB_GPIO_PUSH_PULL = (0x00U << 2U);//00: GPIO output with push-pull

const uint32_t GPIO_CTL0_PIN_0_MD_MASK = (0x03U << 0U);
const uint32_t GPIO_CTL0_PIN_0_MD_OUTPUT_50HZ = (0x03U << 0U);//11: Output mode(50MHz)



const uint32_t GPIO_CTL0_PIN_1_CB_MASK = (0x03U << 6U);
const uint32_t GPIO_CTL0_PIN_1_CB_GPIO_PUSH_PULL = (0x00U << 6U);//00: GPIO output with push-pull

const uint32_t GPIO_CTL0_PIN_1_MD_MASK = (0x03U << 4U);
const uint32_t GPIO_CTL0_PIN_1_MD_OUTPUT_50HZ = (0x03U << 4U);//11: Output mode(50MHz)


const uint32_t GPIO_CTL0_PIN_2_CB_MASK = (0x03U << 10U);
const uint32_t GPIO_CTL0_PIN_2_CB_GPIO_PUSH_PULL = (0x00U << 10U);//00: GPIO output with push-pull

const uint32_t GPIO_CTL0_PIN_2_MD_MASK = (0x03U << 8U);
const uint32_t GPIO_CTL0_PIN_2_MD_OUTPUT_50HZ = (0x03U << 8U);//11: Output mode(50MHz)

const uint32_t GPIO_CTL0_PIN_3_CB_MASK = (0x03U << 14U);
const uint32_t GPIO_CTL0_PIN_3_CB_GPIO_PUSH_PULL = (0x00U << 14U);//00: GPIO output with push-pull

const uint32_t GPIO_CTL0_PIN_3_MD_MASK = (0x03U << 12U);
const uint32_t GPIO_CTL0_PIN_3_MD_OUTPUT_50HZ = (0x03U << 12U);//11: Output mode(50MHz)


const uint32_t GPIO_CTL0_PIN_4_CB_MASK = (0x03U << 18U);
//CTL0[1:0] Pin 4 configuration bits
const uint32_t GPIO_CTL0_PIN_4_CB_GPIO_PUSH_PULL = (0x00U << 18U);//00: GPIO output with push-pull
const uint32_t GPIO_CTL0_PIN_4_CB_AFIO_OUTPUT_PUSH_PULL = (0x02U << 18U); //10: AFIO output with push-pull

const uint32_t GPIO_CTL0_PIN_4_MD_MASK = (0x03U << 16U);
const uint32_t GPIO_CTL0_PIN_4_MD_OUTPUT_50HZ = (0x03U << 16U);//11: Output mode(50MHz)


const uint32_t GPIO_CTL0_PIN_5_CB_MASK = (0x03U << 22U);
const uint32_t GPIO_CTL0_PIN_5_CB_GPIO_PUSH_PULL = (0x00U << 22U);//00: GPIO output with push-pull
const uint32_t GPIO_CTL0_PIN_5_CB_AFIO_OUTPUT_PUSH_PULL = (0x02U << 22U); //10: AFIO output with push-pull


const uint32_t GPIO_CTL0_PIN_5_MD_MASK = (0x03U << 20U);
const uint32_t GPIO_CTL0_PIN_5_MD_OUTPUT_50HZ = (0x03U << 20U);//11: Output mode(50MHz)


const uint32_t GPIO_CTL0_PIN_6_CB_MASK = (0x03U << 26U);
const uint32_t GPIO_CTL0_PIN_6_CB_GPIO_PUSH_PULL = (0x00U << 26U);//00: GPIO output with push-pull
const uint32_t GPIO_CTL0_PIN_6_CB_INPUT_FLOAT = (0x01U << 26U);//01: Floating input //MISO
const uint32_t GPIO_CTL0_PIN_6_CB_AFIO_OUTPUT_PUSH_PULL = (0x02U << 26U); //10: AFIO output with push-pull

const uint32_t GPIO_CTL0_PIN_6_MD_MASK = (0x03U << 24U);
const uint32_t GPIO_CTL0_PIN_6_MD_INPUT = (0x00U << 24U);//00: Input mode (reset state)
const uint32_t GPIO_CTL0_PIN_6_MD_OUTPUT_50HZ = (0x03U << 24U);//11: Output mode(50MHz)



const uint32_t GPIO_CTL0_PIN_7_CB_MASK = (0x03U << 30U);
const uint32_t GPIO_CTL0_PIN_7_CB_GPIO_PUSH_PULL = (0x00U << 30U);//00: GPIO output with push-pull
const uint32_t GPIO_CTL0_PIN_7_CB_AFIO_OUTPUT_PUSH_PULL = (0x02U << 30U); //10: AFIO output with push-pull //MOSI

const uint32_t GPIO_CTL0_PIN_7_MD_MASK = (0x03U << 28U);
const uint32_t GPIO_CTL0_PIN_7_MD_OUTPUT_50HZ = (0x03U << 28U);//11: Output mode(50MHz)





/*
15:0 OCTLy Port output control(y=0..15)
These bits are set and cleared by software
0: Pin output low
1: Pin output high
*/
// NAND for clearing , OR for setting
const uint32_t GPIO_OCTL_PIN_0_SET = (0x01<<0U);









class GPIO
{
private:

GPIO_TypeDef* const GPIO_P;

public:

  GPIO(const uint32_t GPIO_BASE );
  void setSPIMode();
};
