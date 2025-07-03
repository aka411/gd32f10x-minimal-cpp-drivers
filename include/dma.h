#pragma once
#include <cstdint>
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
DMA0 base address: 0x4002 0000
DMA1 base address: 0x4002 0400
Note: For DMA1 having 5 channels, all bits related to channel 5 and channel 6 in the following
registers are not suitable for DMA1.
*/
const uint32_t DMA0_BASE = 0x40020000U;
const uint32_t DMA1_BASE = 0x40020400U;






/*
Channel x control register (DMA_CHxCTL)
x = 0...6, where x is a channel number
Address offset: 0x08 + 0x14 * x
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit).




0 CHEN Channel enable
Software set and cleared
0:Disable channel
1:Enable channel



5 CMEN Circular mode enable
Software set and cleared
0: Disable circular mode
1: Enable circular mode
This bit can not be written when CHEN is ‘1’.


4 DIR Transfer direction
Software set and cleared
0: Read from peripheral and write to memory
1: Read from memory and write to peripheral
This bit can not be written when CHEN is ‘1’.


1 FTFIE Enable bit for channel full transfer finish interrupt
Software set and cleared
0:Disable channel full transfer finish interrupt
1:Enable channel full transfer finish interrupt


2 HTFIE Enable bit for channel half transfer finish interrupt
Software set and cleared
0:Disable channel half transfer finish interrupt
1:Enable channel half transfer finish interrupt

*/
