




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
