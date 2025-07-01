#ifndef CUSTOM_HEADER_H
#define CUSTOM_HEADER_H

#include <stdint.h>

//need to consider constant volatile for read only registers



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



/*
Register definition
SPI0 base address: 0x4001 3000
SPI1 / I2S1 base address: 0x4000 3800
SPI2 / I2S2 base address: 0x4000 3C00


18.5.1. Control register 0 (SPI_CTL0)
Address offset: 0x00
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).
This register has no meaning in I2S mode.
*/

/*
typedef struct
{
Control register 0 (SPI_CTL0)
Address offset: 0x00
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).
This register has no meaning in I2S mode.


Control register 1 (SPI_CTL1)
Address offset: 0x04
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


Status register (SPI_STAT)
Address offset: 0x08
Reset value: 0x0000 0002
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


Data register (SPI_DATA)
Address offset: 0x0C
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


CRC polynomial register (SPI_CRCPOLY)
Address offset: 0x10
Reset value: 0x0000 0007
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).

RX CRC register (SPI_RCRC)
Address offset: 0x14
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).

TX CRC register (SPI_TCRC)
Address offset: 0x18
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).



I2S control register (SPI_I2SCTL)
Address offset: 0x1C
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


I2S clock prescaler register (SPI_I2SPSC)
Address offset: 0x20
Reset value: 0x0000 0002
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).

} SPI_TypeDef;
*/

// Define a struct to represent the SPI peripheral registers
// This structure maps directly to the memory-mapped registers of an SPI instance.
typedef struct
{
    // Control register 0 (SPI_CTL0)
    // Address offset: 0x00
    // Reset value: 0x0000 0000
    // Note: This register has no meaning in I2S mode.
    volatile uint32_t CTL0;

    // Control register 1 (SPI_CTL1)
    // Address offset: 0x04
    // Reset value: 0x0000 0000
    volatile uint32_t CTL1;

    // Status register (SPI_STAT)
    // Address offset: 0x08
    // Reset value: 0x0000 0002
    volatile uint32_t STAT;

    // Data register (SPI_DATA)
    // Address offset: 0x0C
    // Reset value: 0x0000 0000
    volatile uint32_t DATA;

    // CRC polynomial register (SPI_CRCPOLY)
    // Address offset: 0x10
    // Reset value: 0x0000 0007
    volatile uint32_t CRCPOLY;

    // RX CRC register (SPI_RCRC)
    // Address offset: 0x14
    // Reset value: 0x0000 0000
    volatile uint32_t RCRC;

    // TX CRC register (SPI_TCRC)
    // Address offset: 0x18
    // Reset value: 0x0000 0000
    volatile uint32_t TCRC;

    // I2S control register (SPI_I2SCTL)
    // Address offset: 0x1C
    // Reset value: 0x0000 0000
    volatile uint32_t I2SCTL;

    // I2S clock prescaler register (SPI_I2SPSC)
    // Address offset: 0x20
    // Reset value: 0x0000 0002
    volatile uint32_t I2SPSC;

} SPI_TypeDef;



/*
Register definition
DMA0 base address: 0x4002 0000
DMA1 base address: 0x4002 0400
Note: For DMA1 having 5 channels, all bits related to channel 5 and channel 6 in the following
registers are not suitable for DMA1.

*/


/*
typedef struct
{

Interrupt flag register (DMA_INTF)
Address offset: 0x00
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit).



Interrupt flag clear register (DMA_INTC)
Address offset: 0x04
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit).

Channel x control register (DMA_CHxCTL)
x = 0...6, where x is a channel number
Address offset: 0x08 + 0x14 * x
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit).


Channel x counter register (DMA_CHxCNT)
x = 0...6, where x is a channel number
Address offset: 0x0C + 0x14 * x
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit).


Channel x peripheral base address register (DMA_CHxPADDR)
x = 0...6, where x is a channel number
Address offset: 0x10 + 0x14 * x
Reset value: 0x0000 0000
Note: Do not configure this register when channel is enabled.
This register has to be accessed by word (32-bit).




Channel x memory base address register (DMA_CHxMADDR)
x = 0...6, where x is a channel number
Address offset: 0x14 + 0x14 * x
Reset value: 0x0000 0000
Note: Do not configure this register when channel is enabled.
This register has to be accessed by word (32-bit).



}DMA_TypeDef;

*/



typedef struct
{
    // Interrupt flag register (DMA_INTF)
    // Address offset: 0x00
    // Reset value: 0x0000 0000
    volatile uint32_t INTF;

    // Interrupt flag clear register (DMA_INTC)
    // Address offset: 0x04
    // Reset value: 0x0000 0000
    volatile uint32_t INTC;


    // To handle the channel-specific registers, which have a repeating pattern
    // (0x14 offset between channels), we can use an array of structs

    // Let's define a separate struct for a single DMA channel's registers
    typedef struct
    {
        // Channel x control register (DMA_CHxCTL)
        // Address offset: 0x08 (relative to DMA base), but 0x00 relative to this channel block start
        volatile uint32_t CTL;

        // Channel x counter register (DMA_CHxCNT)
        // Address offset: 0x0C (relative to DMA base), but 0x04 relative to this channel block start
        volatile uint32_t CNT;

        // Channel x peripheral base address register (DMA_CHxPADDR)
        // Address offset: 0x10 (relative to DMA base), but 0x08 relative to this channel block start
        volatile uint32_t PADDR;

        // Channel x memory base address register (DMA_CHxMADDR)
        // Address offset: 0x14 (relative to DMA base), but 0x0C relative to this channel block start
        volatile uint32_t MADDR;

        //padding here

    } DMA_Channel_TypeDef;


    // There are 7 channels (0 to 6).
    DMA_Channel_TypeDef CH[7]; // Array of 7 channel register blocks

} DMA_TypeDef;



/*
Register definition
TIMER5 base address: 0x4000 1000
TIMER6 base address: 0x4000 1400
*/
typedef structs
{

Control register 0 (TIMERx_CTL0)
Address offset: 0x00
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)


Control register 1 (TIMERx_CTL1)
Address offset: 0x04
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)
/*
!!!!!!!!!!!!!!!!
//Padding required
!!!!!!!!!!!!!!!!
*/
Interrupt enable register (TIMERx_DMAINTEN)
Address offset: 0x0C
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)


Interrupt flag register (TIMERx_INTF)
Address offset: 0x10
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)




Software event generation register (TIMERx_SWEVG)
Address offset: 0x14
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)

Counter register (TIMERx_CNT)
Address offset: 0x24
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)




Prescaler register (TIMERx_PSC)
Address offset: 0x28
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)


Counter auto reload register (TIMERx_CAR)
Address offset: 0x2C
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit)








}Basic_Timer_TypeDef;














// These tell other .c files that these variables exist and are defined elsewhere
extern const uint32_t RCU_BASE;
extern RCU_TypeDef* const RCU;

extern const uint32_t FMC_BASE;
extern FMC_TypeDef* const FMC;

extern const uint32_t GPIOA_BASE;
extern GPIO_TypeDef* const GPIOA;






#endif // CUSTOM_HEADER_H
