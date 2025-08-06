#pragma once
#include <cstdint>










struct
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

const uint32_t GPIOA_BASE = 0x40010800U;
const uint32_t GPIOB_BASE = 0x40010C00U;
const uint32_t GPIOC_BASE = 0x40011000U;
const uint32_t GPIOD_BASE = 0x40011400U;
const uint32_t GPIOE_BASE = 0x40011800U;
const uint32_t GPIOF_BASE = 0x40011C00U;
const uint32_t GPIOG_BASE = 0x40012000U;




enum class Pin uint8_t //numbers
{
  PIN0,
  PIN1,
  PIN2,
  PIN3,
  PIN4,
  PIN5,
  PIN6,
  PIN7,
  PIN8,
  PIN9,
  PIN10,
  PIN11,
  PIN12,
  PIN13,
  PIN14,
  PIN15
};

enum class PinMode uint8_t //bit pattern
{
  /*
  These bits are set and cleared by software
00: Input mode (reset state)
01: Output mode(10MHz)
10: Output mode(2MHz)
11: Output mode(50MHz)
*/

INPUT = 0,
OUTPUT_10MHz = 1,
OUTPUT_2MHz = 2,
OUTPUT_50MHz = 3

};


enum class PinConfig
{
  /*
  output mode ( MD[1:0] >00)
  00: GPIO output with push-pull
  01: GPIO output with open-drain
  10: AFIO output with push-pull
  11: AFIO output with open-drain
  */

  GPIO_PUSH_PULL = 0,
  GPIO_OPEN_DRAIN = 1,

  AFIO_PUSH_PULL = 2,
  AFIO_OPEN_DRAIN = 3



}





class GPIO
{
private:

GPIO_TypeDef* const GPIO_P = nullptr;

public:

  GPIO(const uint32_t GPIO_BASE );

  void configurePin(Pin pin, PinMode mode, PinConfig config);

  void setPin(Pin pin);//atomic

  void clearPin(Pin pin);//atomic

  void togglePin(Pin pin);

  void writePin(Pin pin, bool state);


  bool readPin(Pin pin);




};
