#pragma once
#include <cstdint>




typedef struct
{

volatile uint32_t WS; // Wait state register (FMC_WS)
//Address offset: 0x00
//Reset value: 0x0000 0000
//This register has to be accessed by word (32-bit)


volatile uint32_t KEY0;  //Unlock key register 0 (FMC_KEY0)
//Address offset: 0x04
//Reset value: 0x0000 0000
//This register has to be accessed by word (32-bit)



volatile uint32_t OBKEY; //Option byte unlock key register (FMC_OBKEY)
//Address offset: 0x08
//Reset value: 0x0000 0000
//This register has to be accessed by word (32-bit)




volatile uint32_t STAT0 ; //Status register 0 (FMC_STAT0)
//Address offset: 0x0C
//Reset value: 0x0000 0000
//This register has to be accessed by word (32-bit)


volatile uint32_t CTL0; //  Control register 0 (FMC_CTL0)
//Address offset: 0x10
//Reset value: 0x0000 0080
//This register has to be accessed by word (32-bit)



volatile uint32_t ADDR0;// Address register 0 (FMC_ADDR0)
//Address offset: 0x14
//Reset value: 0x0000 0000.
//This register has to be accessed by word (32-bit)



volatile uint32_t OBSTAT;//  Option byte status register (FMC_OBSTAT)
//Address offset: 0x1C
//Reset value: 0x0XXX XXXX.
//This register has to be accessed by word (32-bit)


volatile uint32_t WP;//   Erase/Program Protection register (FMC_WP)
//Address offset: 0x20
//Reset value: 0xXXXX XXXX
//This register has to be accessed by word (32-bit)



volatile uint32_t KEY1;//   Unlock key register 1(FMC_KEY1)
//Address offset: 0x44
//Reset value: 0x0000 0000
//This register has to be accessed by word (32-bit)



volatile uint32_t STAT1;//   Status register 1 (FMC_STAT1)
//Address offset: 0x4C
//Reset value: 0x0000 0000
//This register has to be accessed by word (32-bit)




volatile uint32_t  CTL1;// Control register 1 (FMC_CTL1)
//Address offset: 0x50
//Reset value: 0x0000 0080
//This register has to be accessed by word (32-bit)




volatile uint32_t ADDR1;//   Address register 1 (FMC_ADDR1)
//Address offset: 0x54
//Reset value: 0x0000 0000.
//This register has to be accessed by word (32-bit)



volatile uint32_t WSEN; // Wait state enable register (FMC_WSEN)
//Address offset: 0xFC
//Reset value: 0x0000 0000
//This register has to be accessed by word(32-bit)



volatile uint32_t PID;//  Product ID register (FMC_PID)
//Address offset: 0x100
//Reset value: 0xXXXX XXXX
//This register has to be accessed by word (32-bit)



} FMC_TypeDef;


const uint32_t FMC_BASE = 0x40022000U;
FMC_TypeDef* const FMC = (FMC_TypeDef*)(FMC_BASE);
