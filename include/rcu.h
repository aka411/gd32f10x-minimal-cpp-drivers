#pragma once
#include <cstdint>

const uint32_t RCU_BASE = 0x40021000U;
RCU_TypeDef* const RCU = (RCU_TypeDef*)(RCU_BASE);





/*
1 DMA1EN DMA1 clock enable
This bit is set and reset by software.
0: Disabled DMA1 clock
1: Enabled DMA1 clock



0 DMA0EN DMA0 clock enable
This bit is set and reset by software.
0: Disabled DMA0 clock
1: Enabled DMA0 clock
*/

const uint32_t RCU_DMA0_EN = (0x01U<<0U);
const uint32_t RCU_DMA1_EN = (0x01U<<1U);
/*
SPI0 clock enable
This bit is set and reset by software.
0: Disabled SPI0 clock
1: Enabled SPI0 clock
*/
const uint32_t RCU__APB2_SPI0_EN = (0x01U<<12U);
const uint32_t RCU_APB1_SPI1_EN = (0x01U<<14U);
const uint32_t RCU_APB1_SPI2_EN = (0x01U<<15U);







/*
0 AFEN Alternate function IO clock enable
This bit is set and reset by software.
0: Disabled Alternate Function IO clock
1: Enabled Alternate Function IO clock
*/
const uint32_t RCU_APB2_AF_EN = (0x01U<<0U);



/*
2 PAEN  GPIO port A clock enable
This bit is set and reset by software.
0: Disabled GPIO port A clock
1: Enabled GPIO port A clock
*/


const uint32_t RCU_APB2EN_GPIOA_EN = (0x01U<<2U);
const uint32_t RCU_APB2EN_GPIOB_EN = (0x01U<<3U);
const uint32_t RCU_APB2EN_GPIOC_EN = (0x01U<<4U);


typedef struct
{
  volatile uint32_t CTL;      // Control register (RCU_CTL)
   //Address offset: 0x00
  //Reset value: 0x0000 xx83 where x is undefined.



  volatile uint32_t CFG0;     //Clock configuration register 0 (RCU_CFG0)
  //Address offset: 0x04
  //Reset value: 0x0000 0000


  volatile uint32_t INT;      //Clock interrupt register (RCU_INT)
  //  Address offset: 0x08
 //Reset value: 0x0000 0000

  volatile uint32_t APB2RST; //APB2 reset register (RCU_APB2RST)
//Address offset: 0x0C
//Reset value: 0x0000 0000

  volatile uint32_t APB1RST; //APB1 reset register (RCU_APB1RST)
//Address offset: 0x10
//Reset value: 0x0000 0000

  volatile uint32_t AHBEN;  // AHB enable register (RCU_AHBEN)
//Address offset: 0x14
//Reset value: 0x0000 0014

  volatile uint32_t APB2EN ;// APB2 enable register (RCU_APB2EN)
//Address offset: 0x18
//Reset value: 0x0000 0000

  volatile uint32_t APB1EN; //5.3.8. APB1 enable register (RCU_APB1EN)
//Address offset: 0x1C
//Reset value: 0x0000 0000
//This register can be accessed by byte(8-bit), half-word(16-bit) and word(32-bit)

/*
Backup domain control register (RCU_BDCTL)
Address offset: 0x20
Reset value: 0x0000 0000, reset by backup domain reset.
This register can be accessed by byte(8-bit), half-word(16-bit) and word(32-bit)
*/
}  RCU_TypeDef;
